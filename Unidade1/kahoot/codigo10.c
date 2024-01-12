#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Cordenada { //eu sei q Ã© coordenadakkkk
    int x;
    int y;
} Cordenada;

float distancia(Cordenada *p1, Cordenada *p2) {
    float dist = sqrt(pow((*p2).x - p1->x, 2) + pow((*p2).y - p1->y, 2));
    return dist;
}

int main() {
    Cordenada ponto1 = {1, 2};
    Cordenada ponto2 = {7, 4};

    printf("%.2f\n", distancia(&ponto1, &ponto2)); 
    return 0;
}