//declarando uma constante com ENU

#include <stdio.h>
#define TRUE 0
#define FALSE 1

//Enumeração 

/*Basicamente faz uma lista de constantes*/

typedef enum bool{
    true,  //representado por zero
    false //representado por 1
}Bool;     

int main(void){
    Bool resposta;
    printf("Voce gosta de algoritmos? \n 0- True \n 1-False\n");
    scanf("%d", &resposta);
    if (resposta==true){
        printf("Boa escolha");
    }
    else if (resposta==false){
        printf("Que pena! \n");
    }

    return 0;
}