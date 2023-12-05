### Questão 03

+ Código da questão:
```
#include <stdio.h>

int main(void) {
    int a, b, c, d; // cria 4 variáveis inteiras
    int *p1; // cria ponteiro para uma variável inteira
    int *p2 = &a; // cria um ponteiro para uma variável inteira e atribui a ela o endereço de a
    int *p3 = &c; // cria um ponteiro para uma variável inteira e atribui a ela o endereço de c
    p1 = p2; // igualha o ponteiro p1 com p2, assim, pode-se acessar a variável "a" por ambos
    *p2 = 10; // o conteúdo de p2 que é igual a p1 vai ser 10, assim, a = 10
    b = 20; // b vai ser 20
    int **pp; // cria um ponteiro dublo, assim, um ponteiro para outro ponteiro
    pp = &p1; // esse ponteiro vai guardar o endereço do ponteiro p1
    *p3 = **pp; // o conteúdo de p3 vai ser igual ao conteúdo de pp que guarda o conteúdo do conteúdo de p1, ou seja, a
    int *p4 = &d; // cria um ponteiro e atribui ao endereço de d
    *p4 = b + (*p1)++; // o conteúdo de p4 vai ser igual a 20 + 10 (o ++ teria que estar antes para ser 20 + 11)
    printf("%d\t%d\t%d\t%d\n", a, b, c, d); // vai ser printado os conteúdos das variáveis a = 11, b = 20, c = 10, d = 30
    return 0;
}

```


A saída do código será a = 11, b = 20, c = 10, d = 30.