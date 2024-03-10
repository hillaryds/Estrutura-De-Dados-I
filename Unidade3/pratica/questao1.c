#include "pratica.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int quantidade_maiores = 0;
    int numero_digitado = 0;
    Lista * lista_encadeada = lst_cria();
    lista_encadeada = lst_insere(lista_encadeada, 23);
    lista_encadeada = lst_insere(lista_encadeada, 47);
    lista_encadeada = lst_insere(lista_encadeada, 85);
    lista_encadeada = lst_insere(lista_encadeada, 65);
    lista_encadeada = lst_insere(lista_encadeada, 45);
    lista_encadeada = lst_insere(lista_encadeada, 42);
    lista_encadeada = lst_insere(lista_encadeada, 17);


    printf("\nInforme o numero que quer comparar com os da lista: ");
    scanf("%d", &numero_digitado);
    quantidade_maiores = maiores(lista_encadeada, numero_digitado);
    printf("\nExistem %d numeros maiores que %d na lista.", quantidade_maiores, numero_digitado);

    return 0;
}