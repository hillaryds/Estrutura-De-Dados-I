//Crie um tipo estruturado para armazenar dados de uma pessoa. Uma estrutura deste tipo possui os seguintes campos: nome da pessoa, numero do documento e idade.



//a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Pessoa e preencha seus campos com valores fornecidos pelo usuário via teclado.

/*
#include<stdio.h>
#include<stdlib.h>

struct pessoa{
    char nome[20];
    char cpf[11];
    char idade[3];
};

void preenche_pessoa(struct pessoa pessoa){
    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]", pessoa.nome);

    printf("Digite o cpf: ");
    scanf(" %[^\n]", pessoa.cpf);

    printf("Digite a idade: ");
    scanf(" %[^\n]", pessoa.idade);

}

int main(void){
    struct pessoa pessoa;
    preenche_pessoa(pessoa);

    return 0;
}

*/

//b) Escreva uma fun¸c˜ao que receba como parˆametro o endere¸co de uma estrutura do tipo Pessoa e imprima os valores dos seus campos.

/*
#include<stdio.h>
#include<stdlib.h>

struct pessoa{
    char nome[20];
    char cpf[11];
    int idade;
};

void preenche_pessoa(struct pessoa * pessoa){
    
    printf("Digite o nome: ");
    scanf(" %[^\n]", pessoa->nome);

    printf("Digite o cpf: ");
    scanf(" %[^\n]", pessoa->cpf);

    printf("Digite a idade: ");
    scanf(" %d", &pessoa->idade);

}

void imprime_pessoa(struct pessoa * pessoa){
    printf("O nome: %s \n", pessoa->nome);

    printf("O cpf: %s \n", pessoa->cpf);

    printf("A idade: %d \n", pessoa->idade);

}

int main(void){
    struct pessoa * pessoa = (struct pessoa*) malloc(1 * sizeof(struct pessoa));
    preenche_pessoa(pessoa);
    imprime_pessoa(pessoa);

    return 0;
}
*/

//c) Implemente uma função para realizar uma atualização da idade de uma estrutura do tipo Pessoa.

/*
#include<stdio.h>
#include<stdlib.h>

struct pessoa{
    char nome[20];
    char cpf[11];
    int idade;
};

void preenche_pessoa(struct pessoa * pessoa){
    
    printf("Digite o nome: ");
    scanf(" %[^\n]", pessoa->nome);

    printf("Digite o cpf: ");
    scanf(" %[^\n]", pessoa->cpf);

    printf("Digite a idade: ");
    scanf(" %d", &pessoa->idade);

}

void altera_idade(struct pessoa *pessoa){
    printf("Digite a idade alterada de %s \n", pessoa->nome);
    scanf("%d", &pessoa->idade);
}

void imprime_pessoa(struct pessoa * pessoa){
    printf("O nome: %s \n", pessoa->nome);

    printf("O cpf: %s \n", pessoa->cpf);

    printf("A idade: %d \n", pessoa->idade);

}

int main(void){
    struct pessoa * pessoa = (struct pessoa*) malloc(1 * sizeof(struct pessoa));
    preenche_pessoa(pessoa);
    imprime_pessoa(pessoa);
    altera_idade(pessoa);
    imprime_pessoa(pessoa);

    return 0;
}
*/


//d) Escreva uma fun¸c˜ao que receba como parˆametro um vetor de estruturas do tipo Pessoa e imprima o nome da Pessoa mais velha e mais nova

#include<stdio.h>
#include<stdlib.h>


struct pessoa{
    char nome[20];
    char cpf[11];
    int idade;
};

void preenche_pessoa(struct pessoa * pessoa, int N){
    int i;
    for(i=0; i< N; i++){
        printf("Digite o nome: ");
        scanf(" %[^\n]", pessoa[i].nome);

        printf("Digite o cpf de %s: ", pessoa[i].nome);
        scanf(" %[^\n]", pessoa[i].cpf);

        printf("Digite a idade de %s: ", pessoa[i].nome);
        scanf(" %d", &pessoa[i].idade);
    }

}

void altera_idade(struct pessoa *pessoa, int N){
    int i;
    for (i=0; i< N; i++){
        printf("Digite a idade alterada de %s \n", pessoa[i].nome);
        scanf("%d", &pessoa[i].idade);
    }
}

void imprime_pessoa(struct pessoa * pessoa, int N){
    int i;
    for (i=0; i<N; i++){
        printf("*****************************************************************************************\n");
       
        printf("O nome: %s \n", pessoa[i].nome);

        printf("O cpf: %s \n", pessoa[i].cpf);

        printf("A idade: %d \n", pessoa[i].idade);
    }
}


void compara_idade(struct pessoa * pessoa, int N){
    int i;
    int maior_idade, menor_idade;
    for (i=0; i<N; i++){
        if (i==0){
            maior_idade = pessoa[i].idade;
            menor_idade = pessoa[i].idade;
        }
        else{
            if (maior_idade <= pessoa[i].idade){
                maior_idade = pessoa[i].idade;
            }
            else if (menor_idade >= pessoa[i].idade){
                menor_idade = pessoa[i].idade;
            }
        }
    }

    for (i=0; i<N; i++){
        if (pessoa[i].idade == maior_idade){
            printf("*****************************************************************************************\n");
            printf("Pessoa com maior idade: \n");

            printf("O nome: %s \n", pessoa[i].nome);

            printf("A idade: %d \n", pessoa[i].idade);

            printf("O CPF: %s \n", pessoa[i].cpf);
        }
    }

    for (i=0; i<N; i++){
        if (pessoa[i].idade == menor_idade){
            printf("*****************************************************************************************\n"); 
            printf("Pessoa com menor idade: \n");

            printf("O nome: %s \n", pessoa[i].nome);

            printf("A idade: %d \n", pessoa[i].idade);

            printf("O CPF: %s \n", pessoa[i].cpf);
        }
    }
}

int main(void){
    //define o número de pessoas que deseja colocar os dados;
    int N;
    printf("Digite o numero de pessoas que deseja cadastrar: ");
    scanf("%d", &N);

    struct pessoa * pessoa = (struct pessoa*) malloc(N *sizeof(struct pessoa));
    
    preenche_pessoa(pessoa, N);
    imprime_pessoa(pessoa, N);
    altera_idade(pessoa, N);
    imprime_pessoa(pessoa, N);
    compara_idade(pessoa, N);

    free(pessoa);
    return 0;
}