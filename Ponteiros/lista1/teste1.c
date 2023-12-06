#include <stdio.h>
#include <math.h>

void calcula_hexagono(float lado, float *area, float *perimetro){
    *area = 3 * pow(lado, 2) * sqrt(3) / 2;
    *perimetro = 6 * lado;
}

int main(void){
    float a, p, l;
    float *area = &a;
    float *perimetro = &p;
    printf("Digite a medida do lado do hexagono que deseja calcular o perimetro\n");
    scanf("%f", &l);
    calcula_hexagono(l, area, perimetro);
    printf("O valor da area eh %.2f. O valor do perimetro eh %.2f\n", *area, *perimetro);
    return 0;
}


