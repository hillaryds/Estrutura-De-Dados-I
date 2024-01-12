### Questão 04

Crie um programa para calcular a área e o perímetro de um hexágono. O seu
programa deve implementar uma função chamada calcula_hexagono que calcula a área e o
perímetro de um hexágono regular de lado l. A função deve obedecer ao seguinte protótipo:
void calcula_hexagono(float l, float *area, float *perimetro); A área e o perímetro de um
hexágono regular são dados, respectivamente, por:


![Alt text](image.png)

Obs: Para os cálculos, utilize as funções sqrt e pow do módulo math da biblioteca padrão de C. Em seguida, crie a função principal do programa e utilize a função calcula_hexagono para calcular a área e o perímetro de um hexágono de lado l informado pelo usuário.

```
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

```
