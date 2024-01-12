#include <stdio.h>
#include <stdlib.h>

int main()
{
    char **alunos = (char **)malloc(10 * sizeof(char *));
    for (int i = 0; i < 10; i++)
    {
        *alunos = (char *)malloc(10 * sizeof(char)); //fica sobrescrevendo sempre
        *(alunos+i) = (char *)malloc(10 * sizeof(char)); //jeito certo
        alunos[i] = (char *)malloc(10 * sizeof(char)); //jeito certo
    }
    return 0;
}