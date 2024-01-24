/*Escreva um programa que implementa uma struct Produto com os campos nome, pre¸co e tipo. O tipo deve ser armazenado como uma union que armazena um dos tipos: ALIMENTO, BEBIDA ou ELETRONICO. O programa deve ler os dados de um produto e imprimir os dados do produto.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum tipo{
    alimento,
    bebida,
    eletronico
}Tipo;

typedef struct produto{
    float valor;
    Tipo tipo;
}Produto;

void preenche_produto(Produto * produto){
    char opcao[9];
    printf("Preencha o preco:\t");
    scanf("%f", &produto->valor);
    printf("\nDigite o tipo entre 0 - alimento, 1- bebida ou 2 - eletronico:\t");
    scanf(" %d", &produto->tipo);
}

void imprime_produto (Produto * produto){
    printf("Preco: %.2f", produto->valor);
    
    switch (produto->tipo)
    {
    case alimento:
        printf("\nTipo: Alimento");
        break;
    case bebida:
        printf("\nTipo: Bebida");
        break;
    case eletronico:
        printf("\nTipo: Eletrônico");
    default:
        printf("\nDeu erro");
    }
}
int main(void){
    Produto * produto = malloc(sizeof(Produto));
    preenche_produto(produto);
    imprime_produto(produto);

    free(produto);
    return 0;
}