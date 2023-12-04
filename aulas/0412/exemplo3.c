#include <stdio.h>



int soma (int a, int b){
    return a + b;
}


int subtrai (int a, int b){
    return a - b;
}

int multiplica (int a, int b){
    return a * b;
}

int dividir (int a, int b) {
    return a / b;
}

int calcula(int x, int y, int (*operacao)(int, int)){ //ela recebe um inteiro x e y e um ponteiro para uma função de dois argumentos inteiros. Assim, dá pra usar uma função dentro de outra
    return(*operacao)(x, y); // vai realizar um aoperação através da chamada de outra função 
}


int main(){
    int resultado = calcula(5, 3, soma);
    printf("Resultado: %d \n", resultado);
    int resultado2 = calcula(5, 3, subtrai);
    printf("Resultado: %d \n", resultado2);
    int resultado3 = calcula(5, 3, multiplica);
    printf("Resultado: %d \n", resultado3);
    int resultado4 = calcula(4, 3, dividir);
    printf("Resultado: %d \n", resultado4);
    return 0;
}

