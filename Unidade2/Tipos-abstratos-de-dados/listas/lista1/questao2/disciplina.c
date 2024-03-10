#include "aluno.h"
#include "disciplina.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct disciplina{
    char nome[100];
    int codigo;
};

Disciplina* cria_disciplina(char nome[], int codigo){
    Disciplina * disciplina = (Disciplina*) malloc(sizeof(Disciplina));
    strcpy(disciplina->nome, nome);
    disciplina->codigo = codigo;
    return(disciplina);
}

void exclui_disciplina(Disciplina* disciplina){
    free(disciplina);
    printf("\nMemoria liberada!");
}

