/*Escreva um programa em C que preencha um vetor de 10 inteiros com informações vindas de um arquivo e escreva em outro arquivo o menor elemento, o maior elemento, bem como a média dos elementos do vetor, como ilustrado a seguir*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void preenche_numeros(FILE * arquivo_entrada){
    int numeros[10];
    arquivo_entrada = fopen("entrada.txt", "w");
    
    if(arquivo_entrada == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo lido!\n");
    }
    
    for(int id=0; id<10; id++){
        printf("\nDigite um numero que deseja adicionar: ");
        scanf("%d", &numeros[id]);
    }
    
    for(int id=0; id<10; id++){
        fprintf(arquivo_entrada, "%d\n", numeros[id]);
    }

    fclose(arquivo_entrada);

}

void calcula_arquivo(FILE * arquivo_entrada, FILE * arquivo_saida){
    int numeros[10];
    
    arquivo_entrada = fopen("entrada.txt", "r");
    if(arquivo_entrada == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo lido!\n");
    }
    
    arquivo_saida = fopen("saida.txt", "w");
    if(arquivo_saida == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo lido!\n");
    }

    char linha[121];
    int numero_arquivo = 0;
    int maior_num = 0;
    int menor_num = 0;
    float media;

    
    for(int id = 0; id < 10; id++) {
        if (fgets(linha, 121, arquivo_entrada) != NULL) {
            sscanf(linha, "%d", &numeros[id]); // Correção: adicionado '&'
            
            media += numeros[id];
            
            if (id == 0) {
                maior_num = numeros[id];
                menor_num = numeros[id];
            } else {
                if (numeros[id] > maior_num) {
                    maior_num = numeros[id];
                }
                if (numeros[id] < menor_num) { // Correção: corrigido operador de comparação
                    menor_num = numeros[id];
                }
            }
        }
    }


    media = media / 10;
    fprintf(arquivo_saida, "Maior numero: %d\nMenor numero: %d\nMedia: %.2f", maior_num, menor_num, media);

    fclose(arquivo_entrada);
    fclose(arquivo_saida);
}

int main(void){
    FILE * arquivo_entrada;
    FILE * arquivo_saida;

    preenche_numeros(arquivo_entrada);
    calcula_arquivo(arquivo_entrada, arquivo_saida);
    return 0;
}