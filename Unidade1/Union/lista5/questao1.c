#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union genero{
    char masculino[10];
    char feminino[10];

}Genero;


typedef struct pessoa{
    char nome[20];
    int idade;
    Genero sexo;
}Pessoa;

void preenche_pessoa(Pessoa * pessoa){
    char opcao[9];
    printf("Preencha o seu nome:\t");
    scanf(" %[^\n]", pessoa->nome);
    printf("\nPreencha a sua idade:\t");
    scanf(" %d", &pessoa->idade);
    printf("\nDigite o seu genero:\t");
    scanf(" %[^\n]", &opcao);

    if (strcmp(opcao, "Masculino") == 0 || strcmp(opcao, "masculino") == 0){
        strcpy(pessoa->sexo.masculino, "Masculino");
    }
    else if (strcmp(opcao, "Feminino") == 0 || strcmp(opcao, "feminino") == 0){
        strcpy(pessoa->sexo.feminino, "Feminino");
    }
    else{
        printf("\nDados invalidos.\t");
        exit(1);
    }
}


void imprime_pessoa (Pessoa * pessoa){
    printf("Nome: %s", pessoa->nome);
    printf("\nIdade: %d", pessoa->idade);
    printf("\nSexo: %s", pessoa->sexo.masculino);
}

int main(void){
    Pessoa * pessoa = malloc(sizeof(Pessoa));
    preenche_pessoa(pessoa);
    imprime_pessoa(pessoa);

    free(pessoa);
    return 0;
}