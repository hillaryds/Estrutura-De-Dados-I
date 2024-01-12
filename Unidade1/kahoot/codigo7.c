#include <stdio.h>

union uniao {
    int inteiro;
    float decimal;
    char caractere;
};

int main() {
    union uniao minhaUnion;
    minhaUnion.inteiro = 42;
    minhaUnion.decimal = 3.14;
    minhaUnion.caractere = 'A';
    printf("%c\n", minhaUnion.caractere); // a saída é 'A'

    return 0;
}