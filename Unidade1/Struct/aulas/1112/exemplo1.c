#include <stdio.h> 


//definindo a estrutura aluno
    struct aluno{ //atributo
        char nome[20];
        int idade;
        int matricula;
        char email[50];
    };

int main(void){

    struct aluno aluno; // a variável aluno tem todos os parâmetros do struct
    printf("Digite o nome do aluno: \n");
    scanf(" %[^\n]", aluno.nome);//char já é um vetor
    printf("Digite a idade do aluno: \n");
    scanf(" %d", &aluno.idade);
    printf("Digite a matricula do aluno: \n");
    scanf(" %d", &aluno.matricula);
    printf("Digite o email: \n");
    scanf(" %[^\n]", aluno.email);


    return 0;
}