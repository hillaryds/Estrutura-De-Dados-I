#include <stdio.h>
#include <stdlib.h>



int main(void){
    FILE * fp;
    char c[20];

    fp = fopen("entrada.txt", "r"); //o sistema identifica que o arquivo é texto pela extensão
    if(fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo aberto\n");
    }


    fscanf(fp, "%s", c); // lê uma string
    printf("%s\n", c); //imprime a string
    if(!fclose(fp) ){ 
        printf("Arquivo fechado com sucesso");
    } //fecha o arquivo


    return 0;
}