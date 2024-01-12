/*
#include <stdio.h>

int main(void){
int x, *p; //cria duas variáveis inteiras, uma sendo ponteiro de inteiro;
x = 100; //x recebe 100;
p = x; // o ponteiro recebe o valor inteiro e não um endereço;
printf(“Valor de p = %p \t Valor de *p = %d”, p, *p); //ele tenta imprimir o ponteiro e o valor, mas dará erro pois esse endereço não existe;
}

*/

/* Se tentarmos compilar o programa (não o compile ainda), você acha que o compilador nos fornece alguma mensagem? Se sim, responda:*/

//a) Esta mensagem é de erro ou advertência?

/*O compilador oferece uma mensagem de advertência primeiro e, após isso, uma de erro. A de erro é porque ele está colocando como endereço do ponteiro um número inteiro que não existe como endereço. Por isso, que quando ele tenta "printar" esse endereço e o valor, dará erro, já que não tem como mostrar um endereço inexistente, muito menos o conteúdo de algo inexistente. (puramente filosófico)*/


//b) Por que o compilador emite tal mensagem?

/*O problema está porque a biblioteca não foi incluída e o endereço do ponteiro é inexistente.*/


//c) Compile e execute o programa. A execução foi bem sucedida?

/*Não foi executado pelos erros de inclusão da biblioteca e de endereço.*/


//d) Modifique o trecho de código acima, de modo que nenhuma mensagem seja emitida pelo compilador.

#include <stdio.h> // inclusão da biblioteca 

int main(void) {
    int x, *p;
    x = 100;
    p = &x; //pede para ele guardar o endereço ao invés de um número inteiro;
    printf("Valor de p = %p.\tValor de *p = %d", p, *p);
    return 0; // boas práticas de programação
}


//e) Compile e execute novamente o programa. A execução foi bem sucedida?

//Sim, amém.
