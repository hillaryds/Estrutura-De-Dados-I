#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct funcionario{
    char nome[50];
    char id[3];
    char departamento;
    float salario;
}Funcionario;


void captar_informacoes(FILE* arquivo, int n, Funcionario ** funcionarios){
    for(int i = 0; i < n; i++){
        fscanf(arquivo, "%[^\t]\t%49[^\t]\t%c\t%f\n", funcionarios[i]->id, funcionarios[i]->nome, &funcionarios[i]->departamento, &funcionarios[i]->salario);
    }
}


void imprime_folha_pagamento(int n, Funcionario** pessoal, char depto){
    printf("FOLHA DE PAGAMENTO DEPTO %c\n", depto);
    printf("ID\tNOME\tDEPTO\tSALARIO\n");
    int i;
    float valor_total = 0;
    for(i = 0; i < n; i++){
        if(pessoal[i]->departamento == depto){
            printf("%s\t%s\t%c\t%.2f\n", pessoal[i]->id, pessoal[i]->nome, pessoal[i]->departamento, pessoal[i]->salario);
            valor_total += pessoal[i]->salario;
        }
    }
    printf("VALOR TOTAL:\tR$%.2f\n", valor_total);


}