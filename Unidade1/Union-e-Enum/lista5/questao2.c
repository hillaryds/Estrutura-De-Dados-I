/*Escreva um programa que implementa uma struct Produto com os campos nome, pre¸co e tipo. O tipo deve ser armazenado como uma union que armazena um dos tipos: ALIMENTO, BEBIDA ou ELETRONICO. O programa deve ler os dados de um produto e imprimir os dados do produto.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union tipo{
    char alimento[9];
    char bebida[6];
    char eletronico[10];
}Tipo;


typedef struct produto{
    float valor;
    Tipo tipo;
}Produto;

void preenche_produto(Produto * produto){
    char opcao[9];
    printf("Preencha o preco:\t");
    scanf("%f", &produto->valor);
    printf("\nDigite o tipo entre alimento, bebida ou eletronico:\t");
    scanf(" %[^\n]", &opcao);

    if (strcmp(opcao, "Alimento") == 0 || strcmp(opcao, "alimento") == 0){
        strcpy(produto->tipo.alimento, "ALIMENTO");
    }
    else if (strcmp(opcao, "Bebida") == 0 || strcmp(opcao, "bebida") == 0){
        strcpy(produto->tipo.bebida, "BEBIDA");
    }
    else if (strcmp(opcao, "Eletronico") == 0 || strcmp(opcao, "eletronico") == 0){
        strcpy(produto->tipo.eletronico, "ELETRONICO");
    }
    else{
        printf("\nDados invalidos.\t");
        exit(1);
    }
}

void imprime_produto (Produto * produto){
    printf("Preco: %.2f", produto->valor);
    printf("\nTipo: %s", produto->tipo.alimento);
}

int main(void){
    Produto * produto = malloc(sizeof(Produto));
    preenche_produto(produto);
    imprime_produto(produto);

    free(produto);
    return 0;
}
