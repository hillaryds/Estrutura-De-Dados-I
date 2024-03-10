#include <stdio.h>
#include "aluno.h"
#include <stdlib.h>


int main(void){
    Aluno * aluno;
    aluno = recebe_dados();
    imprime_dados(aluno);


    Aluno * alunos = matricula_alunos();
    libera(aluno);
    return 0;
    
}