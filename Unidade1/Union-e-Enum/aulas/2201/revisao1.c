#include <stdio.h>
#include <stdlib.h>


//União para armazenar um documento por vez
typedef union documentos{
    char rg[15];
    char cpf[15];

}Documentos;

typedef struct pessoa{
    char nome [20];
    int idade;
    Documentos doc; //Variável para armazenar o CPF ou RG

}Pessoa;

void dados_pessoa(Pessoa * p){
    /*Função que preenche os dados de uma variável do tipo Pessoa*/
    int opcao;
    printf("Informe o nome:\t");
    scanf(" %[^\n]", p->nome);
    printf("\nInforme a idade:\t");
    scanf(" %d", &p->idade);
    printf("\nInforme o 1 para o RG ou 0 para o CPF:\t");
    scanf("%d", &opcao );
    if (opcao){ //trata 1 como verdadeiro e 0 como falso
        printf("\nInforme o RG:\t");
        scanf(" %d %d", &p->doc.rg );
    }
    else{
        printf("\nInforme o CPF:\t");
        scanf(" %d %d", &p->doc.cpf);
    }
}


int main(void){
   // Pessoa pessoa; //alocação estática
    Pessoa * pessoa = malloc (sizeof(Pessoa));
    dados_pessoa(pessoa); //a função recebe o endereço da variável 
    free(pessoa);
    return 0;
}


// usando o union ////////////////////////////////////////////////


//Estrutura union

/*typedef union tipodados{
    int meu_int;
    float meu_float;

}Dados;

int main(void){
    Dados uniao;
    printf("Digite os dados: \t");
    scanf("%d %f", &uniao.meu_int, &uniao.meu_float);
    printf("OS dados informados: meu_int = %d meu_float = %f", uniao.meu_int, uniao.meu_float);
    return 0;
}*/


