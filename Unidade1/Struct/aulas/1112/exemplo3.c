#include <stdio.h> 
#include <stdlib.h>


//definindo a estrutura aluno
struct aluno{ //atributo
    char nome[20];
    int idade;
    int matricula;
    char email[50];
};

//preenchendo os dados da struct

void preenche(struct aluno * estudante){
    
    printf("Digite o nome do aluno: \n");
    scanf(" %[^\n]", estudante->nome);//char já é um vetor e o endereço;
    printf("Digite a idade do aluno: \n");
    scanf(" %d", &estudante->idade);
    printf("Digite a matricula do aluno: \n");
    scanf(" %d", &estudante->matricula);
    printf("Digite o email: \n");
    scanf(" %[^\n]", estudante->email);


}

int main(void){
    //usando alocação dinÂmica 
    struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
    if(estudante == NULL){
        exit(1);
    }

    preenche(estudante);


    free(estudante);
    return 0;
}