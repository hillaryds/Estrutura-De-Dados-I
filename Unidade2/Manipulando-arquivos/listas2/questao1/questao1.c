/*Faca um programa em C que solicita ao usuario informacoes de funcionarios via teclado. As informaçoes digitadas pelo o usuario sao: id, nome e salario do funcionario. Armazene as informaçoes digitadas pelo usuario em um arquivo texto.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario{
    char nome[100];
    int id;
    float salario;

}Funcionario;

void preenche_arquivo(Funcionario * funcionario, int N){
    FILE * arquivo_entrada = fopen("entrada.txt", "w");
    
    if(arquivo_entrada == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo lido!\n");
    }

    for(int index=0; index < N; index++){
        fprintf(arquivo_entrada, "Nome: %s\tID: %d\tSalario: R$%.2f\n", funcionario[index].nome, funcionario[index].id, funcionario[index].salario);
    }

    fclose(arquivo_entrada);
}

Funcionario * preenche_funcionario(int N){
    Funcionario * funcionario = (Funcionario*) malloc(N * sizeof(Funcionario));
    for(int index = 0; index < N; index++){
        printf("Digite o nome do funcionario: ");
        scanf(" %[^\n]", funcionario[index].nome);

        printf("Digite o ID do funcionario: ");
        scanf(" %d", &funcionario[index].id);

        printf("Digite o salario do funcionario: ");
        scanf(" %f", &funcionario[index].salario);
    }
    return(funcionario);
}

int main(void){

    int N;
    printf("\nDigite o numero de funcionarios que deseja cadastrar: ");
    scanf("%d", &N);

    Funcionario * funcionario = preenche_funcionario(N);

    preenche_arquivo(funcionario, N);


    free(funcionario);
    return 0;
}