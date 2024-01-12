#include <stdio.h>

int main(void){
    int a = 7;
    int b = 1;
    int c = 2;
    int *p1 = &a;
    int *p2 = &b;
    int **p3 = &p1;
    int *p4 = &c;
    **p3 = ++(*p1) + b - (*p4);
    *p2 = c + b - (**p3)++; //quando tá depois ele acessa o conteúdo e soma a variável total depois a 1
    (*p1)--; //acessou e não fez nada
    *p4 += b++ + 7;
    printf("%d %d %d",a,b, c);
}
