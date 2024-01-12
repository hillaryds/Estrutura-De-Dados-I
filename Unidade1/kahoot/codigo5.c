#include <stdio.h>
#include <stdlib.h>

void preencherMatriz(int **matriz, int linhas, int colunas) {
    int contador = 1;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = contador++;
        }
    }
}

int main() {
    int linhas = 3;
    int colunas = 4;
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int)); //matriz[i] == *(matriz+1)
    }
    preencherMatriz(matriz, linhas, colunas);
    printf("%d\n", matriz[3][4]); //esse elemento da matriz não existe;
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}