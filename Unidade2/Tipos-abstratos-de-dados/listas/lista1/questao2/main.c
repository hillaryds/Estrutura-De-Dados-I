#include "disciplina.h"
#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
    
    Aluno * aluno = cria_aluno("Hillary Diniz", 4002);
    Disciplina * disciplina1 = cria_disciplina("Estrutura de Dados I", 147);
    Disciplina * disciplina2 = cria_disciplina("Sociologia", 258);
    Disciplina * disciplina3 = cria_disciplina("Algoritmos", 963);
    Disciplina * disciplina4 = cria_disciplina("Calculo II", 369);

    printf("\n======================================================");

    printf("\nMatriculando o aluno nas disciplinas:");
    matricula_disciplina(aluno, disciplina1);
    matricula_disciplina(aluno, disciplina2); 
    matricula_disciplina(aluno, disciplina3);
    matricula_disciplina(aluno, disciplina4);
    printf("\n=========================================================");

    printf("\n\t\tDados do aluno:");
    imprimir_aluno(aluno);
    printf("\n=========================================================");


    exclui_aluno(aluno);
    exclui_disciplina(disciplina1);
    exclui_disciplina(disciplina2);
    exclui_disciplina(disciplina3);
    exclui_disciplina(disciplina4);
    return 0;
}