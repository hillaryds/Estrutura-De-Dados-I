#include <stdio.h>
#include "operacao.h"

int main(void){
    float a = 2.0;
    float b = 10.0;

    printf("%.2f\n", soma_float(a, b));
    printf("%.2f\n", sub_float(a, b));
    printf("%.2f\n", mult_float(a, b));
    printf("%.2f\n", div_float(a, b));


}