/* Implemente um programa em C para ler o nome e as notas de um numero N de alunos e armazena-los em um arquivo.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    char nome[100];
    float nota1;
    float nota2;
}Aluno;

void preenche_arquivo(Aluno * aluno, int N){
    FILE * arquivo_entrada = fopen("alunos.txt", "w");
    
    if(arquivo_entrada == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo lido!\n");
    }

    for(int index=0; index < N; index++){
        fprintf(arquivo_entrada, "Nome: %s\tNota 1: %.2f\tNota 2: %.2f\n", aluno[index].nome, aluno[index].nota1, aluno[index].nota2);
    }

    fclose(arquivo_entrada);
}

Aluno * preenche_aluno(int N){
    Aluno * aluno = (Aluno*) malloc(N * sizeof(Aluno));
    for(int index = 0; index < N; index++){
        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]", aluno[index].nome);

        printf("Digite a nota 1 do aluno: ");
        scanf(" %f", &aluno[index].nota1);

        printf("Digite a nota 2 do aluno: ");
        scanf(" %f", &aluno[index].nota2);

        printf("----------------------------------");
    }
    
    return(aluno);
}

int main(void){

    int N;
    printf("\nDigite o numero de alunos que deseja cadastrar: ");
    scanf("%d", &N);

    Aluno * aluno = preenche_aluno(N);

    preenche_arquivo(aluno, N);

    free(aluno);
    return 0;
}