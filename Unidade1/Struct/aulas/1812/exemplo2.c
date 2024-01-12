#include <stdio.h>
#include <stdlib.h>


// Exemplo de ANINHAMENTO de estruturas 

typedef struct disciplina{
    char nome;
    float nota;
    int codigo;

}Disciplina;


typedef struct aluno {
    char nome [20];
    int idade;
    int matricula;
    //vetor de disciplinas declarado estaticamente
    Disciplina materias[7];
}Aluno;

int main (void){
    Aluno aluno;
    aluno.idade = 18; // acessando variável idade dentro do Aluno
    aluno.matricula = 202332;
    aluno.materias[0].codigo = 40028922; //acessando pela struct aluno;
    printf("%d, %d, %d \n", aluno.idade, aluno.matricula, aluno.materias[0].codigo);

    


    return 0;
}