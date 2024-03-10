#include "aluno.h"
#include "disciplina.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    char nome[100];
    int matricula;
    Disciplina * disciplinas[10];
    int num_disciplinas;
};

Aluno* cria_aluno(char nome[], int matricula){
    Aluno * aluno = (Aluno*) malloc(sizeof(Aluno));
    strcpy(aluno->nome, nome);
    aluno->matricula = matricula;
    aluno->num_disciplinas = 0;
    return(aluno);
}


void matricula_disciplina(Aluno * aluno, Disciplina * disciplina){
    printf("\nRealizando a matricula do aluno %s na disciplina %s", aluno->nome, disciplina->nome);

    int verificador = 1;
    if(aluno->num_disciplinas >= 10){
        printf("\nEsse aluno ja esta cadastrado em 10 disciplinas");
        verificador = 0;
    }
    else{
        for (int index = 0; index < aluno->num_disciplinas; index++){
            if(aluno->disciplinas[index]->codigo == disciplina->codigo){
                printf("\n%s ja esta matriculado(a) na disciplina %s",aluno->nome, disciplina->nome);
                verificador = 0;
            }
        }

        if (verificador != 0){
            aluno->disciplinas[aluno->num_disciplinas] = disciplina;
            aluno->num_disciplinas ++;

        }
    }
}

void exclui_aluno(Aluno* aluno){
    free(aluno);
    printf("\nMemoria liberada com sucesso!");
}


void imprimir_aluno(Aluno * aluno){
    printf("\nNome: %s", aluno->nome);
    printf("\nMatricula: %d", aluno->matricula);
    printf("\nDisciplinas matriculadas: %d", aluno->num_disciplinas);
    for(int index = 0; index < aluno->num_disciplinas; index++){
        printf("\n---------------------------------------------");
        printf("\nNome: %s", aluno->disciplinas[index]->nome);
        printf("\nCodigo: %d", aluno->disciplinas[index]->codigo);
    }
}