//1) Quais serão os valores de x, y e p ao final do trecho de código abaixo:

#include <stdio.h>

int main(void){
    int x, y, *p; //cria-se as variáveis x, y e p (ponteiro);
    y = 0; //atribui o valor zero a y;
    p = &y; //p vai ter o endereço de y;
    x = *p; //x tem o conteúdo do endereço de y;
    x = 4; //x tem o número 4;
    (*p)++; // o conteúdo de p (y) foi somado 1 célula e vai de 0 para 1; sem os parênteses não teria nenhuma mudança 
    --x; //a variável x é subtraída 1 unidade; vai de 4 parqa 3;
    (*p) += x; //o conteúdo da variável do endereço de p (y) é somado ao conteúdo da variável x que é 3; y = 4;
    printf("%d, %d, %p", x, y, p);
    return 0;
} 
//Assim, y = 4;, p = endereço de y;, x = 3.