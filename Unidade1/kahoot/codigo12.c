/// Código altamente bugado 


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 5

typedef struct fruta
{
    char nome[20];
    char cor[20];
    char sabor[20];
    int quantidade;
} Fruta;

void cadastrar_fruta(Fruta *fruta, int qnt)
{
    printf("Insira o nome da fruta: ");
    scanf(" %[^\n]s", fruta[qnt].nome);
    printf("Insira a cor da fruta: ");
    scanf(" %[^\n]s", fruta[qnt].cor);
    printf("Insira o sabor da fruta: ");
    scanf(" %[^\n]s", fruta[qnt].sabor);
    printf("insira a quantidade: ");
    scanf(" %d", &fruta[qnt].quantidade);
    (qnt)++;
}

void listar_frutas(Fruta *fruta, int qnt)
{
    for (int i = 0; i < qnt; i++)
    {
        printf("Nome: %s\n", fruta[i].nome);
        printf("Cor: %s\n", fruta[i].cor);
        printf("Sabor: %s\n", fruta[i].sabor);
        printf("Quantidade: %d\n", fruta[i].quantidade);
        printf("\n");
    }
}

void buscar_fruta(Fruta *fruta, int qnt)
{
    char nome[20];
    printf("Insira o nome da fruta que deseja buscar: ");
    scanf(" %[^\n]s", nome);
    for (int i = 0; i < qnt; i++)
    {
        if (strcmp(nome, fruta[i].nome) == 0)
        {
            printf("Nome: %s\n", fruta[i].nome);
            printf("Cor: %s\n", fruta[i].cor);
            printf("Sabor: %s\n", fruta[i].sabor);
            printf("Quantidade: %d\n", fruta[i].quantidade);
            printf("\n");
        }
    }
}

int main()
{
    Fruta *frutas = (Fruta*)malloc(MAX *sizeof(Fruta));
    int quantidade = 0;
    cadastrar_fruta(frutas, quantidade);
    cadastrar_fruta(frutas, quantidade);
    printf("\n");
    listar_frutas(frutas, quantidade);
    buscar_fruta(frutas, quantidade);
    return 0;
}