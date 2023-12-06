#include <stdio.h>
#include <stdlib.h> //Funções malloc, calloc, free, exit e afins


int main(void){

    int tamanho = 5;
    int contador;
    int *vetor = (int *) malloc(tamanho * sizeof(int));
    if (vetor == NULL){ // verifica se a alocação foi bem sucedida
        exit(1); //aborta a execução do programa
    }
    else{
        printf("Alocação realizada com sucesso\n");
    }

    // Ler os dados do vetor:
    printf("Digite os valores do vetor: \n");
    for (contador = 0; contador < tamanho; contador ++){
        scanf("%i", &vetor[contador]); // &vetor[contador] = vetor+contador
    }

    free(vetor);
    return 0;
}
