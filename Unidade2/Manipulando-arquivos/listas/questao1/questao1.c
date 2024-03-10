/*Escreva um programa em C que leia de um arquivo as notas dos alunos de uma turma e escreva em outro arquivo o nome e a média de cada aluno, bem como a sua situação (aprovado (média >= 7.0) ou reprovado). Tanto no arquivo de entrada quanto no de saída, considere que os dados em cada linha estão separados por um caractere de tabulação ‘\t’. Para a execução do programa com o arquivo de entrada “entrada_q3.txt”, deverá ser criado o arquivo de saída “saída_q3.txt”, como ilustrado a seguir.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    FILE * arquivo_entrada;
    FILE * arquivo_saida;
    char nome[80];
    char linha[121];
    float n1, n2, n3, media = 0;
    char mensagem[20];

    //abre o arquivo de entrada
    arquivo_entrada = fopen("entrada1.txt", "r");
    
    if(arquivo_entrada == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo lido!\n");
    }

    //criando e abrindo o arquivo de saida
    arquivo_saida = fopen("saida1.txt", "w");
    
    if(arquivo_saida == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo lido!\n");
    }


    while(fgets(linha, 121, arquivo_entrada) != NULL){ 
        sscanf(linha,"%20[^\t]\t%f\t%f\t%f\n", nome, &n1, &n2, &n3); //pega a formataçõa específica
        media = (n1 + n2 + n3)/3;
        if (media >= 7.0){
            strcpy(mensagem, "Aprovado");
        }
        else{
            strcpy(mensagem, "Reprovado");
        }

        fprintf(arquivo_saida, "%s\t%.2f\t%s\n", nome, media, mensagem);
    }
    


    if(!fclose(arquivo_entrada)){
        printf("\nArquivo de entrada fechado com sucesso");
    } //fecha o arquivo
    if(!fclose(arquivo_saida)){
        printf("\nArquivo de saida fechado com sucesso");
    } //fecha o arquivo
    return 0;
}