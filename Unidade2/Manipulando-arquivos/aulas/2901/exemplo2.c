#include <stdio.h>
#include <stdlib.h>



int main(void){
    FILE * fp;
    int c;

    fp = fopen("entrada.txt", "r"); //o sistema identifica que o arquivo é texto pela extensão
    if(fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo aberto\n");
    }


    c = fgetc(fp); //Lê um caractere 
    printf("%c\n", c); //imprime o caractere lido
    if(!fclose(fp) ){ 
        printf("Arquivo fechado com sucesso");
    } //fecha o arquivo


    return 0;
}