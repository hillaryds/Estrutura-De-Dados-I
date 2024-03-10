#include <stdio.h>
#include <stdlib.h>
#include "ingresso.h"


int main(void){
    int n; //número de ingressos a serem cadastrados

    //Decidindo o número de ingressos a serem cadastrados;
    separador();
    printf("\nDigite o numero de ingressos qe deseja cadastrar:");
    scanf("%d", &n);
    separador();

    Ingresso * i = (Ingresso *) malloc(n * sizeof(i));

    preenche(i, n);
    imprime(i, n);
    altera_preco(i, n);
    maior_menor_preco(i, n);

    free(i);
    return 0;
}