#include "lista.h"
#include <stdio.h>
#include <stdlib.h>


struct lista{
    int info;
    Lista * proximo_elemento;
};

Lista * lst_cria(void){
    return NULL;
}

Lista * lst_insere(Lista * lista_original, int valor){
    Lista * novo_no = (Lista*) malloc(sizeof(Lista));
    if (novo_no == NULL){
        exit(1);
    }
    novo_no->info = valor;
    //concecta um novo nó à lista
    novo_no->proximo_elemento = lista_original;
    return novo_no;
}

void lst_imprime(Lista * lista){
    Lista * contador;
    for(contador = lista; contador != NULL; contador = contador->proximo_elemento){
        printf("informacao = %d\n", contador->info);
    }
}

int lst_vazia(Lista * lista){
    if(lista == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

Lista * lst_busca(Lista * lista, int valor_buscado){
    Lista * contador;
    int achei = 0;
    for (contador = lista; contador != NULL; contador = contador->proximo_elemento){
        if (contador->info == valor_buscado){
            printf("O elemento %d foi encontrado", contador->info);
            achei = 1;
        }
    }
    if (achei){
        printf("Elemento não encontrado");
    }

}

Lista * lst_retira (Lista * lista, int valor){
    Lista * elemento_anterior = NULL;
    Lista * contador = lista;

    while (contador != NULL && contador->info != valor){
        elemento_anterior = contador;
        contador = contador->proximo_elemento;
    }

    if (contador == NULL){
        return 1; // não encontrou:retorna a lista original;
    }

    if (elemento_anterior == NULL){
        lista = contador->proximo_elemento;
    }
    else{
        elemento_anterior->proximo_elemento = contador->proximo_elemento;
    }
    free(contador);
    return 1;
}
