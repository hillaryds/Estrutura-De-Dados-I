#include <stdio.h>
#include <stdlib.h>

typedef struct ingresso{
    float preco;
    char local[20];
    char atracao[30];

}Ingresso;

void preenche(Ingresso * i){
    printf("Preencha o valor do ingressso: ");
    scanf("%f", &i->preco);

    printf("\nInforme o local da sessao: ");
    scanf(" %[^\n]", i->local);

    printf("\nInforme a atracao: ");
    scanf(" %[^\n]", i->atracao);
}

void imprime(Ingresso * i){
    printf("\n---------------------------------------");
    printf("\nValor do ingressso: R$%.2f", i->preco);

    printf("\nLocal da sessao: %s", i->local);

    printf("\nAtracao: %s", i->atracao);
}

void altera_preco(Ingresso * i, float valor){
    i->preco = valor;
    printf("Novo valor: R$%.2f", i->preco);
}

void altera_preco_vet(int n, Ingresso * vet){
    int c;
    int n_ingresso;
    float novo_valor;
    printf("\n-------------------------------------------------------------------------");
    printf("\nDigite o numero do ingresso que deseja mudar que vai de 0 ate %d: ", n-1);
    scanf("%d", &n_ingresso);
    for(c=0; c < n; c++){
        if (c == n_ingresso){
            printf("\nInforme o novo valor que deseja cadastrar: ");
            scanf("%f", &novo_valor);
            vet[c].preco = novo_valor;

        }
    }
}



void imprime_menor_maior_preco(int n, Ingresso * vet ){
    int i;
    float maior_preco = vet[0].preco;
    float menor_preco = vet[0].preco;

    for (i = 0; i < n; i++) {
        if (vet[i].preco > maior_preco) {
            maior_preco = vet[i].preco;
        }

        if (vet[i].preco < menor_preco) {
            menor_preco = vet[i].preco;
        }
    }


    for (i=0; i<n; i++){
        if (vet[i].preco == maior_preco){
            printf("*****************************************************************************************\n");
            printf("Ingresso com maior preco: \n");

            printf("O preco: %f \n", vet[i].preco);

            printf("O local: %s \n", vet[i].local);

            printf("A atracao: %s \n", vet[i].atracao);
        }
    }

    for (i=0; i<n; i++){
        if (vet[i].preco == menor_preco){
            printf("*****************************************************************************************\n");
            printf("Ingresso com menor preco: \n");

            printf("O preco: %.2f \n", vet[i].preco);

            printf("O local: %s \n", vet[i].local);

            printf("A atracao: %s \n", vet[i].atracao);
        }
    }

}


int main(void){
    Ingresso * i = malloc(sizeof(Ingresso));
    
    preenche(i);
    imprime(i);

    //mudando o preço do ingresso
    float novoValor;
    printf("\nInforme o novo valor do ingresso: ");
    scanf("%f", &novoValor);
    altera_preco(i, novoValor);

    //Criando um vetor de ingressos
    int n;
    printf("\nInforme o numero de ingressos que deseja cadastrar: ");
    scanf("%d", &n);
    Ingresso * vet = malloc(n * sizeof(Ingresso));
    
    int c; 
    for(c=0; c< n; c++){
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
        printf("\nPreencha o valor do ingressso %d: ", c);
        scanf("%f", &vet[c].preco);

        printf("\nInforme o local da sessao: ");
        scanf(" %[^\n]", vet[c].local);

        printf("\nInforme a atracao: ");
        scanf(" %[^\n]", vet[c].atracao);
    }

    //mudando o preço do ingresso dentro do vetor 
    altera_preco_vet(n, vet);

    //imprimindo o menor e maior valor de ingresso
    imprime_menor_maior_preco(n, vet);


    free(i);
    free(vet);
    return 0;
}