#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 5;
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = i + 1;
    }
    tamanho *= 3;
    vetor = (int *)realloc(vetor, tamanho * sizeof(int));
    for (int i = tamanho / 3; i < tamanho; i++)
    {
        vetor[i] = i + 1;
    }
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    free(vetor);
    return 0;
}