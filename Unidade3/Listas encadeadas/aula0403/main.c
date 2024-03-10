#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
    Lista * lista_encadeada = lst_cria();
    lista_encadeada = lst_insere(lista_encadeada, 23);
    lista_encadeada = lst_insere(lista_encadeada, 45);
    lista_encadeada = lst_insere(lista_encadeada, 45);
    lista_encadeada = lst_insere(lista_encadeada, 45);
    lista_encadeada = lst_insere(lista_encadeada, 45);
    lista_encadeada = lst_insere(lista_encadeada, 45);
    lista_encadeada = lst_insere(lista_encadeada, 45);
    lst_imprime(lista_encadeada);
    if(lst_vazia(lista_encadeada) == 1){
        printf("\nLista vazia");
    }

    
    return 0;
}