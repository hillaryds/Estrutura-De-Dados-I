/*Voce foi contratado para desenvolver um programa em C que permita o cadastro de frutas e seus preços em um arquivo de dados. O programa deve usar uma estrutura para armazenar os detalhes de cada fruta, incluindo o nome da fruta e o preço. O programa deve realizar as seguintes açoes: 
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct fruta{
    char nome[100];
    float valor;
}Fruta;

void preenche_arquivo(Fruta * fruta, int N){
    FILE * arquivo_entrada = fopen("frutas.txt", "a");
    
    if(arquivo_entrada == NULL){
        printf("\nErro na abertura do arquivo!");
        exit(1);
    }
    else{
        printf("\nArquivo lido!");
    }

    for(int index=0; index < N; index++){
        fprintf(arquivo_entrada, "Nome: %s,valor: R$%.2f\n", fruta[index].nome, fruta[index].valor);
    }

    fclose(arquivo_entrada);
}

Fruta * preenche_fruta(int N){
    Fruta * fruta = (Fruta*) malloc(N * sizeof(Fruta));
    for(int index = 0; index < N; index++){
        printf("\nDigite o nome da fruta: ");
        scanf(" %[^\n]", fruta[index].nome);

        printf("\nDigite o valor da fruta: ");
        scanf(" %f", &fruta[index].valor);
        printf("\n----------------------------------");
    }
    
    return(fruta);
}

int main(void){
    int N;
    printf("\nDigite o numero de frutas que deseja cadastrar: ");
    scanf("%d", &N);

    Fruta * fruta = preenche_fruta(N);

    preenche_arquivo(fruta, N);

    free(fruta);
    return 0;
}
