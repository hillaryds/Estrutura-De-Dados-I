#include <stdio.h>
#include <stdlib.h>


// Exemplo de ANINHAMENTO de estruturas 

typedef struct disciplina{
    char nome[20];
    float nota;
    int codigo;

}Disciplina;


typedef struct aluno {
    char nome [20];
    int idade;
    int matricula;
    Disciplina * materias;
}Aluno;

int main (void){
    //Alocando a variável aluno
    Aluno * aluno = (Aluno*) malloc(sizeof(Aluno));
    if (aluno == NULL) {exit (1);}
    //Alocando memoria para o vetor de 2 disciplinas
    aluno->materias = (Disciplina*) malloc(2* sizeof(Disciplina)); 
    if (aluno->materias ==NULL) {exit(1);}

    printf("Informe os dados do aluno: nome, idade e matricula\n");
    scanf(" %[^\n]", aluno->nome);
    scanf("%d %d", &aluno->idade, &aluno->matricula);


    // Cadastro de disciplinas
    int index;
    for (index=0; index<2; index++){
        printf("Cadastro de disciplina %d\n", index+1);
        scanf(" %[^\n]s", aluno->materias[index].nome); //acessa a posição da materia e o nome dela
        scanf("%d", &aluno->materias[index].nota);
        scanf("%d", &aluno->materias[index].codigo); // acessa a nota e o código da matéria nessa posição
    }
    

    free(aluno);
    return 0;
}