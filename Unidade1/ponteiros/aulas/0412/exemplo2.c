int *cria_variavel() { //uma função par ponteiro que retorna um  ponteiro

    int variavel = 5;
    return &variavel; // atribui-se o endereço de variavel

}

int main(){

    int *ponteiro = cria_variavel();
    printf("Valor da variavel: %d", *ponteiro);
    return 0;
}