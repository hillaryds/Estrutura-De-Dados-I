#include <stdio.h>

int main(void){
    float var = 3.14; // variável com um float
    printf("%f\n", var);
    float *point = &var; // point contém o endereço de var
    printf("%p\n", point);
    float pi = *point; // pi contém o conteúdo da variável do endereço point
    printf("%f\n", pi);
    *point = 1.31456; // a partir daqui muda-se o conteúdo da variável var e point continua com o mesmo endereço
    printf("\n");
    printf("%f\n", var); 
    printf("%p\n", point);
    printf("%f\n", pi); // continua contendo que tinha antes de ser mudado o conteúdo

    return 0;
}