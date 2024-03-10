#include <stdio.h>
#include <stdlib.h>



int main(void){
    FILE * fp;
    char c[20];

    fp = fopen("entrada_escrita.txt", "w"); //o sistema identifica que o arquivo é texto pela extensão
    if(fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo aberto\n");
    }

    fputc('A', fp);

    if(!fclose(fp) ){ 
        printf("Arquivo fechado com sucesso");
    } //fecha o arquivo


    return 0;
}