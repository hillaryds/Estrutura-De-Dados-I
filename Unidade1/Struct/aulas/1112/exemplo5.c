#include <stdio.h> 
#include <stdlib.h>


//definindo a estrutura aluno
struct aluno{ //atributo
    char nome[20];
    int idade;
    int matricula;
    char email[50];
};

// definindo a estrutura professor

struct professor{ //atributo
    char nome[20];
    int idade;
    int matricula;
    char email[50];
};


//preenchendo os dados da struct

void preencheAluno(struct aluno * estudante){
    
    printf("Digite o nome do aluno: \n");
    scanf(" %[^\n]", estudante->nome);//char já é um vetor e o endereço;
    printf("Digite a idade do aluno: \n");
    scanf(" %d", &estudante->idade);
    printf("Digite a matricula do aluno: \n");
    scanf(" %d", &estudante->matricula);
    printf("Digite o email: \n");
    scanf(" %[^\n]", estudante->email);

}
void preencheProfessor(struct professor * pessoa){
    
    printf("Digite o nome do professor: \n");
    scanf(" %[^\n]", pessoa->nome);//char já é um vetor e o endereço;
    printf("Digite a idade do professor: \n");
    scanf(" %d", &pessoa->idade);
    printf("Digite a matricula do professor: \n");
    scanf(" %d", &pessoa->matricula);
    printf("Digite o email: \n");
    scanf(" %[^\n]", pessoa->email);

}



void imprimeProfessor(struct professor* pessoa){
    printf("Nome: %s\nIdade: %d\nMatricula %d\nEmail: %s\n", pessoa->nome, pessoa->idade, pessoa->matricula, pessoa->email);
}

void imprimeAluno(struct aluno* estudante){
    printf("Nome: %s\nIdade: %d\nMatricula %d\nEmail: %s\n", estudante->nome, estudante->idade, estudante->matricula, estudante->email);
}

int main(void){
    //usando alocação dinÂmica 
    struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
    struct professor * pessoa = (struct professor*) malloc(sizeof(struct professor));
    if(estudante == NULL){
        exit(1);
    }

    preencheAluno(estudante);
    imprimeAluno(estudante);

    preencheProfessor(pessoa);
    imprimeProfessor(pessoa);

    free(estudante);
    free(pessoa);
    return 0;
}