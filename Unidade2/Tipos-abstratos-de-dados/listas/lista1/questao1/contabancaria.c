#include "contabancaria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contabancaria{
    char titular[100];
    int numero;
    float saldo;
};

Contabancaria * criaconta(){
    Contabancaria * nova_conta = (Contabancaria*) malloc(sizeof(Contabancaria));
    if (nova_conta == NULL){
        printf("\nMemoria insuficiente!");
        exit(1);
    }

    printf("\n==================================");
    printf("\nDigite o nome do titular: ");
    scanf(" %[^\n]", nova_conta->titular);
    printf("\nDigite o numero da conta: ");
    scanf("%d", &nova_conta->numero);
    printf("\nDigite o saldo da conta: R$");
    scanf("%f", &nova_conta->saldo);

    return(nova_conta);
}

void deposita(Contabancaria * conta, float valor){
    conta->saldo = conta->saldo + valor;
}

void saca(Contabancaria* conta, float valor){
    if(conta->saldo >= valor){
        conta->saldo = conta->saldo - valor;
        printf("\nValor sacado com sucesso!");
    }
    else{
        printf("\nSaldo insuficiente para ser sacado");
    }
}

void transfere(Contabancaria * remetente, Contabancaria * destinatario, float valor){
    if (remetente->saldo >= valor){
        remetente->saldo = remetente->saldo - valor;
        destinatario->saldo = destinatario->saldo + valor;
        printf("\nTransacao realizada com sucesso");
    }
    else{
        printf("\nSaldo insuficiente para realizar a transferencia");
    }
}

void saldo(Contabancaria* conta){
    printf("\nSaldo: %.2f", conta->saldo);
    printf("\n===================================");
}

void excluiConta(Contabancaria* conta){
    free(conta);
    printf("\nConta excluida com sucesso!");
}
