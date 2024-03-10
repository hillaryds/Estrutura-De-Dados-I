#include <stdio.h>
#include <stdlib.h>
#include "ingresso.h"


struct ingresso{
    float preco;
    char local[20];
    char atracao[30];

};

void separador(){
    printf("\n====================================================");
}


void preenche(Ingresso * i, int n_ingressos){ 
    for(int index=0; index < n_ingressos; index++){
        printf("\nPreencha o valor do ingressso %d: ", index + 1);
        scanf("%f", &i[index].preco);

        printf("\nInforme o local da sessao: ");
        scanf(" %[^\n]", i[index].local);

        printf("\nInforme a atracao: ");
        scanf(" %[^\n]", i[index].atracao);
        
        separador();
    }
}

void imprime(Ingresso * i, int n_ingressos){
    int c, id;
    separador();
    printf("\nID\tValor   Local \t\tAtracao");
    for(c=0; c < n_ingressos; c++){
            printf("\n%d\t%.2f\t%s\t%s", c, i[c].preco, i[c].local, i[c].atracao);
    }

    separador();
}

void altera_preco(Ingresso * i, int n_ingressos){
    int id;
    printf("\nDigite o ID do ingresso que deseja mudar o valor: ");
    scanf("%d", &id);

    for(int index=0; index < n_ingressos; index++){
        if(i[index].preco == i[id].preco){
            printf("\nDigite o novo valor do ingresso: R$");
            scanf("%f", &i[index].preco);
        }
    }
}

void maior_menor_preco(Ingresso * i, int n_ingressos){
    float maior_preco;
    float menor_preco;
    
    separador();
    for(int index = 0; index < n_ingressos; index ++){
        if (index ==0){
            maior_preco = i[index].preco;
            menor_preco = i[index].preco;
        }
        else{
            if (maior_preco < i[index].preco){
                maior_preco = i[index].preco;
            }
            else if(menor_preco > i[index].preco){
                menor_preco = i[index].preco;
            }
        }
    }
    
    printf("\nO maior preco e: R$%.2f; O menor preco e: R$%.2f.", maior_preco, menor_preco);
}