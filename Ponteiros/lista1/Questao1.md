### Questão 1


```
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;
```




+ Linha 1 - cria-se as variáveis x, y e p (ponteiro);
+ Linha 2 - atribui o valor zero a y;
+ Linha 3 - p vai ter o endereço de y;
+ Linha 4 - x tem o conteúdo do endereço de y;
+ Linha 5 - x tem o número 4;
+ Linha 6 - o conteúdo de p foi somado 1 célula;
+ Linha 7 - a variável x é subtraída 1 unidade;
+ Linha 8 - o conteúdo da variável do endereço de p é somado ao conteúdo da variável x;

Assim, `y = 0;`, `p = endereço;`, `x = 3; `.