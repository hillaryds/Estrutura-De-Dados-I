#include "pratica.h"
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

int maiores (Lista * lista_original, int valor){
    Lista * contador;
    int qtd_numeros_maiores = 0;
    for (contador = lista_original; contador != NULL; contador = contador->proximo_elemento){
        if (contador->info > valor){
            qtd_numeros_maiores++;
        }
    }
    return qtd_numeros_maiores;
}

Lista * ultimo(Lista * lista_original){
    Lista * contador;
    int ultimo_valor = 0;
    for (contador = lista_original; contador != NULL; contador = contador->proximo_elemento){
        ultimo_valor = contador->info;
    }
    printf("O ultimo elemento da lista e: %d", ultimo_valor);
}