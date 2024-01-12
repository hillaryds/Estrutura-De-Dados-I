#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 5;
    int **matriz = (int **)malloc(tamanho * sizeof(int *));
    matriz[0][1] = 2;
    matriz[1][1] = 5;
    matriz[2][1] = 3;
    printf("%d\n", matriz[0][1] + matriz[1][1] + matriz[2][1]);
    free(matriz);
    return 0;
}