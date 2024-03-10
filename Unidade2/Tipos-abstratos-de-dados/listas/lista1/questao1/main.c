#include "contabancaria.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
    Contabancaria * conta1 = criaconta(conta1);
    Contabancaria * conta2 = criaconta(conta2);

    float valor_depositar;
    printf("\nDigite o valor que deseja depositar na conta 1: ");
    scanf("%f", &valor_depositar);
    deposita(conta1, valor_depositar);
    saldo(conta1);


    float valor_sacar;
    printf("\nDigite o valor que deseja sacar da sua conta 2: ");
    scanf("%f", &valor_sacar);
    saca(conta2, valor_sacar);
    saldo(conta2);

    float valor_transferir;
    printf("\nDigite o valor que deseja transferir da conta 1 para a 2: ");
    scanf("%f", &valor_transferir);
    transfere(conta1, conta2, valor_transferir);
    saldo(conta1);
    saldo(conta2);

    excluiConta(conta1);
    excluiConta(conta2);
    return 0;
}