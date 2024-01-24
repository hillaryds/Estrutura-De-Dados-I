#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum mes{
    janeiro, 
    fevereiro, 
    marco, 
    abril, 
    maio, 
    junho, 
    julho, 
    agosto, 
    setembro, 
    outubro, 
    novembro, 
    dezembro
}Mes;

typedef struct data{
    int dia;
    Mes mes;
    int ano;
}Data;

void preenche_data(Data * data){
    printf("Digite o dia:\t");
    scanf("%d", &data->dia);
    printf("\nDigite o mes que vai de 0-janeiro ate 11-dezembro:");
    scanf(" %d", &data->mes);
    printf("\nDigite o ano:");
    scanf(" %d", &data->ano);
}

void imprime_data (Data * data){
    printf("A data digitada foi: ");
    printf("%d/", data->dia);
    printf("%d", data->mes);
    printf("/ %d.", data->ano);
}

int main(void){
    Data * data = malloc(sizeof(Data));
    preenche_data(data);
    imprime_data(data);

    free(data);
    return 0;
}