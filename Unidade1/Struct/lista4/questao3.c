/* Defina estruturas para representar retângulos (dadas a base e a altura) e círculos (dado o raio), e implemente as funções a seguir:*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct retangulo{
    float b;
    float h;
} Ret;

typedef struct circulo{
    float r;
} Circ;

//Função que calcula o ret
Ret * ret_circunscrito(Circ* circ, float h){
    
    float diametro;
    
    Ret* ret = (Ret*) malloc(sizeof(Ret));

    diametro = 2 * circ->r;


    //Descobrindo a base a altura através do diametro
    ret->b = sqrt(pow(diametro, 2) - pow(h, 2));                                                          
    ret->h = h;

    return ret;
}

Circ * circ_interno(Ret* ret){
    Circ* circ = (Circ*) malloc(sizeof(Circ));

    if(ret->h > ret->b){
        circ->r = ret->b/2;
    }else{
        circ->r = ret->h/2;
    }

    return circ;
}

void preenche_retangulo(Circ* circ){
    float h;

    printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-");
    printf("\n Retangulo circunscrito");
    printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-");

    printf("\nDigite o raio do circulo: ");
    scanf("%f", &circ->r);

    printf("Digite a altura do retangulo que sera circunscrito: ");
    scanf("%f", &h);

    if (h > circ->r * 2){
        printf("Não sera possivel utilizar essa altura, ja que ela eh maior que o diametro do circulo\n");
        while (circ->r *2 <= h){
            printf("Digite a altura do retangulo que sera circunscrito: ");
            scanf("%f", &h);
        }  
    }

    Ret* retangulo = ret_circunscrito(circ, h);
    printf("O retangulo circunscrito com a altura %.2f e o raio do circulo %.2f tem a base de: %.2f.\n", h, circ->r, retangulo->b, retangulo->h);
    
}


void preenche_circulo(Ret* ret){
    printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-");
    printf("\n Circulo interno");
    printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-");

    printf("\nDigite a base do retangulo: ");
    scanf("%f", &ret->b);
    
    printf("Digite a altura do retangulo: ");
    scanf("%f", &ret->h);

    Circ* circ = circ_interno(ret);

    printf("O circulo interno ao retangulo de base %.2f e altura %.2f tem o raio de: %.2f.\n", ret->b, ret->h, circ->r);
}

int main(void){
    //Alocando dinamicamente as estruturas
    Ret* ret = (Ret*) malloc(sizeof(Ret));
    Circ* circ = (Circ*) malloc(sizeof(Circ));

    preenche_retangulo(circ);
    preenche_circulo(ret);

    //Liberando a memória alocada
    free (ret);
    free (circ);

    return 0;
    
}