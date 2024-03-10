
/*TAD: Aluno/*Implementar as funções*/
#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>

struct  aluno{
    char nome[20];
    int matricula;
    float IRA;

};


Aluno * recebe_dados(void){
    Aluno * estudante = (Aluno *) malloc(sizeof(Aluno));
    if (estudante == NULL){
        printf("Nao ha espaco suficiente");
        exit(1);
    }

    printf("\nInforme o nome do aluno: ");
    scanf(" %[^\n]", estudante->nome);
    printf("\nInforme a matricula: ");
    scanf("%d", &estudante->matricula);
    printf("\nInforme o IRA do estudante: ");
    scanf("%f", &estudante->IRA);

    return estudante;
}

Aluno * matricula_alunos(void){
    int N;
    printf("\nInforme o nuemro de alunos que deseja matricular: ");
    scanf("%d", &N);
    Aluno * estudantes = (Aluno *) malloc(N * sizeof(Aluno));
    if (estudantes == NULL){
        printf("Nao ha espaco suficiente");
        exit(1);
    }
    int i;
    for (i=0; i < N; i++){
        printf("\nInforme o nome do aluno: ");
        scanf(" %[^\n]", estudantes[i].nome);
        printf("\nInforme a matricula: ");
        scanf("%d", &estudantes[i].matricula);
        printf("\nInforme o IRA do estudante: ");
        scanf("%f", &estudantes[i].IRA);
    }
    

    return estudantes;
}


void imprime_dados(Aluno * estudante){
    printf("\naluno: %s", estudante->nome);
    printf("\nMatricula: %d", estudante->matricula);
    printf("\nIRA: %f", estudante->IRA);

}


void libera(Aluno * estudante){
    free(estudante);
    printf("\nMemoria liberada com sucesso");
}
