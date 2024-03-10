/* Conta o número de linhas de um arquivo*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int c;
    int nlinhas = 0; //contador de linhas
    FILE * fp;

    //abre arquivo para leitura

    fp = fopen("entrada_escrita.txt", "rt"); //o sistema identifica que o arquivo é texto pela extensão
    if(fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo aberto\n");
    }

    //lê a acaractere por caractere


    while((c= fgetc(fp)) != EOF){ //END OF FILE  = constante final do arquivo
        if (c == '\n');
            nlinhas ++;
    }
    

    //fecha arquivo

    fclose(fp);


    //exibe resultado na tela

    printf("Numero de linhas: %d\n ", nlinhas);
    return 0;
}



