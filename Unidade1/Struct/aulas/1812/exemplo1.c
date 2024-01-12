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
    Disciplina materias; // Aninhamento da estrutua disciplina na estrutura aluno; 
}Aluno;

int main (void){
    Aluno aluno;
    aluno.idade = 18; // acessando variável idade dentro do Aluno
    aluno.matricula = 20230112032;
    aluno.materias.codigo = 40028922; //acessando pela struct aluno;
    return 0;
}








