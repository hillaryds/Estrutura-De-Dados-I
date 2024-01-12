#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct aluno {
    int mat;
    float media;
} Aluno;

int main() {
    Aluno a = {77777, 7.7};//não é uma struct de ponteiro, ou seja, não dá para usar ->
    printf("matricula: %d\nmedia: %.1lf\n",a.mat,a.media); 
    return 0;
}