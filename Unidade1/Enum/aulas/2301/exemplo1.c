//declarando uma constante 



#define TRUE 0
#define FALSE 1

int main(void){
    int resposta;
    printf("Voce gosta de algoritmos? \n 0- True \n 1-False\n");
    scanf("%d", &resposta);
    if (resposta==TRUE){
        printf("Boa escolha");
    }
    else if (resposta==FALSE){
        printf("Que pena! \n");
    }

    return 0;
}