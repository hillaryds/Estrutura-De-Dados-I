#include <stdio.h>
#include <stdlib.h>



int main(void){
    FILE * fp;

    fp = fopen("entrada.txt", "wt");
    if(fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo criado\n");
    }

    if(!fclose(fp) ){
        printf("Arquivo fechado com sucesso");
    } //fecha o arquivo


    return 0;
}