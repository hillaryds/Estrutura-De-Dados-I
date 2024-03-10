#include <stdio.h>
#include <stdlib.h>
#ifndef FUNCIONARIO_C_INCLUDED
#define FUNCIONARIO_C_INCLUDED
#include "funcionario.c"
#endif

int main(){
    FILE * arquivo = fopen("funcionarios.txt", "r");
    int n;
    fscanf(arquivo, "%d\n", &n);
    
    Funcionario ** funcionario = (Funcionario**) malloc(n * sizeof(Funcionario*));
    
    for(int i = 0; i < n; i++){
        funcionario[i] = (Funcionario*) malloc(sizeof(Funcionario*));
    }

    for(int i = 0; i < n; i++){
        fscanf(arquivo, "%[^\t]\t%[^\t]\t%c\t%f\n", funcionario[i]->id, funcionario[i]->nome, &funcionario[i]->departamento, &funcionario[i]->salario);
    }

    captar_informacoes(arquivo, n, funcionario);
    
    
    imprime_folha_pagamento(n, funcionario, 'A');
    imprime_folha_pagamento(n, funcionario, 'B');
    imprime_folha_pagamento(n, funcionario, 'C');

    
    
    for(int i = 0; i < n; i++){
        free(funcionario[i]);
    }
    free(funcionario);
    
    fclose(arquivo);

    return 0;
}