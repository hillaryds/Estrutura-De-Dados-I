### Questão 2 

```
int main(void) {
    int x, *p;
    x = 100;
    p = x;
    printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
}
```
a) O compilador oferece uma mensagem de advertência primeiro e, após isso, uma de erro. A de erro é porque ele está colocando como endereço do ponteiro um número inteiro que não existe como endereço. Por isso, que quando ele tenta "printar" esse endereço e o valor, dará erro, já que não tem como mostrar um endereço inexistente, muito menos o conteúdo de algo inexistente.


b) O problema está porque a biblioteca não foi incluída e o endereço do ponteiro é inexistente.

c) Não foi executado pelos erros de inclusão da bbiblioteca e de endereço.

d) 

```
#include <stdio.h> // inclusão da biblioteca 

int main(void) {
    int x, *p;
    x = 100;
    p = &x; //perde para ele guardar o endereço
    printf("Valor de p = %p \tValor de *p = %d", p, *p);
    return 0; // boas práticas de programação
}
```

