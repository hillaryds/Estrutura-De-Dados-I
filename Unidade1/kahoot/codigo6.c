#include <stdio.h>
#include <stdlib.h>


struct documento
{
    int numero;
};

struct aluno
{
    int mat;
    float notas[3];
    float media;
    struct documento cpf;
    struct documento rg;
};

int main(){

    struct aluno Aluno1 = {17271,{7.5,4.5,10},(7.5+4.5+10)/3}; //é possível inicializar dessa forma;
    printf("Matricula: %d\nNotas: %.2f\t%.2f\t%.2f\nMedia: %.2f\n",Aluno1.mat,
    Aluno1.notas[0],Aluno1.notas[1],Aluno1.notas[2],Aluno1.media);
    return 0;
}