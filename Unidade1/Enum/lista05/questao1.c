#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum genero{
   masculino,
   feminino
}Genero;


typedef struct pessoa{
    char nome[20];
    int idade;
    Genero sexo;
}Pessoa;

void preenche_pessoa(Pessoa * pessoa){
    //Função que preenche os dados de uma pessoa
    int opcao;
    printf("Preencha o seu nome:\t");
    scanf(" %[^\n]", pessoa->nome);
    printf("\nPreencha a sua idade:\t");
    scanf(" %d", &pessoa->idade);
    printf("\nDigite o seu genero: 0- masculino 1- feminino\t");
    scanf(" %d", &pessoa->sexo);
}


void imprime_pessoa (Pessoa * pessoa){
    printf("Nome: %s", pessoa->nome);
    printf("\nIdade: %d", pessoa->idade);
    printf("\nSexo: %s", pessoa->sexo==masculino? "Masculino":"Feminino");
}

int main(void){
    Pessoa * pessoa = malloc(sizeof(Pessoa));
    preenche_pessoa(pessoa); //função que recebe os dados de acordo com um ponteiro
    imprime_pessoa(pessoa); //Função que imprime os dados

    free(pessoa);
    return 0;
}