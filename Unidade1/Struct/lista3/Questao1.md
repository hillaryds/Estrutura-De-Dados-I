### Questão 1


1. Crie um tipo estruturado para armazenar dados de um funcion´ario. Uma estrutura deste tipo possui
os seguintes campos: nome, salário, identificador e cargo.
a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Funcionario
e preencha seus campos com valores fornecidos pelo usuário via teclado.

```
#include<stdio.h>
#include<stdlib.h>

struct funcionario{
    char nome[20];
    float salario;
    int identificador;
    char cargo[20];
};

void preenche_funcionario(struct funcionario funcionario){
    printf("Digite o nome do funcionario: ");
    scanf(" %[^\n]", funcionario.nome);

    printf("Digite o salario do funcionario: ");
    scanf(" %f", &funcionario.salario);

    printf("Digite o identificador do funcionario: ");
    scanf(" %d", &funcionario.identificador);

    printf("Digite o cargo do funcionario: ");
    scanf(" %f", &funcionario.cargo);

}

int main(void){
    struct funcionario funcionario;
    preenche_funcionario(funcionario);

    return 0;
}

```

b) Escreva uma função que receba como parâmetro  o endere¸co de uma estrutura do tipo Funcionario
e imprima os valores dos seus campos.

```
#include<stdio.h>
#include<stdlib.h>

struct funcionario{
    char nome[20];
    float salario;
    int identificador;
    char cargo[20];
};

void preenche_funcionario(struct funcionario * funcionario){
    printf("Digite o nome do funcionario: ");
    scanf(" %[^\n]", funcionario->nome);

    printf("Digite o salario do funcionario: ");
    scanf(" %f", &funcionario->salario);

    printf("Digite o identificador do funcionario: ");
    scanf(" %d", &funcionario->identificador);

    printf("Digite o cargo do funcionario: ");
    scanf(" %[^\n]", &funcionario->cargo);

}

void imprime_usuario(struct funcionario * funcionario){
    printf("O nome do funcionario: %s \n", funcionario->nome);

    printf("O salario do funcionario: %f \n", funcionario->salario);

    printf("O identificador do funcionario: %d \n", funcionario->identificador);

    printf("O cargo do funcionario: %s \n", funcionario->cargo); 
}

int main(void){
    struct funcionario * funcionario = (struct funcionario*) malloc(1 * sizeof(struct funcionario));
    preenche_funcionario(funcionario);
    imprime_usuario(funcionario);

    return 0;
}

```



c) Implemente uma função para realizar uma alteração no salário de uma estrutura do tipo Funcionario.

```
#include<stdio.h>
#include<stdlib.h>

struct funcionario{
    char nome[20];
    float salario;
    int identificador;
    char cargo[20];
};

void preenche_funcionario(struct funcionario * funcionario){
    printf("Digite o nome do funcionario: ");
    scanf(" %s", funcionario->nome);

    printf("Digite o salario do funcionario: ");
    scanf(" %f", &funcionario->salario);

    printf("Digite o identificador do funcionario: ");
    scanf(" %d", &funcionario->identificador);

    printf("Digite o cargo do funcionario: ");
    scanf(" %[^\n]", &funcionario->cargo);

}

void altera_salario(struct funcionario *funcionario){
    printf("Digite o novo salário do funcionario %s \n", funcionario->nome);
    scanf("%f", &funcionario->salario);
}

void imprime_funcionario(struct funcionario * funcionario){
    printf("O nome do funcionario: %s \n", funcionario->nome);

    printf("O salario do funcionario: %.2f \n", funcionario->salario);

    printf("O identificador do funcionario: %d \n", funcionario->identificador);

    printf("O cargo do funcionario: %s \n", funcionario->cargo); 
}

int main(void){
    struct funcionario * funcionario = (struct funcionario*) malloc(1 * sizeof(struct funcionario));
    preenche_funcionario(funcionario);
    imprime_funcionario(funcionario);
    altera_salario(funcionario);
    imprime_funcionario(funcionario);

    return 0;
}

```


d) Escreva uma função que receba como parâmetro um vetor de estruturas do tipo Funcionario e
imprima o cargo e salário do Funcionario com maior salário e o cargo e salário do funcionário
com o menor salário.

```
#include<stdio.h>
#include<stdlib.h>



struct funcionario{
    char nome[20];
    float salario;
    int identificador;
    char cargo[20];
};

void preenche_funcionario(struct funcionario * funcionario, int N){
    int i;
    for(i=0; i< N; i++){
        printf("Digite o nome do funcionario %d: ", i+1);
        scanf(" %[^\n]", funcionario[i].nome);

        printf("Digite o salario do funcionario %s: ", funcionario[i].nome);
        scanf(" %f", &funcionario[i].salario);

        printf("Digite o identificador do funcionario %s: ", funcionario[i].nome);
        scanf(" %d", &funcionario[i].identificador);

        printf("Digite o cargo do funcionario %s: ", funcionario[i].nome);
        scanf(" %[^\n]", &funcionario[i].cargo);
    }

}

void altera_salario(struct funcionario *funcionario, int N){
    int i;
    for (i=0; i< N; i++){
        printf("Digite o novo salario do funcionario %s \n", funcionario[i].nome);
        scanf("%f", &funcionario[i].salario);
    }
}

void imprime_funcionario(struct funcionario * funcionario, int N){
    int i;
    for (i=0; i<N; i++){
        printf("*****************************************************************************************\n");
        printf("O nome do funcionario: %s \n", funcionario[i].nome);

        printf("O salario do funcionario: %.2f \n", funcionario[i].salario);

        printf("O identificador do funcionario: %d \n", funcionario[i].identificador);

        printf("O cargo do funcionario: %s \n", funcionario[i].cargo); 
    }
}


void compara_salario(struct funcionario * funcionario, int N){
    int i;
    float maior_valor, menor_valor;
    for (i=0; i<N; i++){
        if (i==0){
            maior_valor = funcionario[i].salario;
            menor_valor = funcionario[i].salario;
        }
        else{
            if (maior_valor < funcionario[i].salario){
                maior_valor = funcionario[i].salario;
            }
            else if (menor_valor > funcionario[i].salario){
                menor_valor = funcionario[i].salario;
            }
        }
    }

    for (i=0; i<N; i++){
        if (funcionario[i].salario == maior_valor){
            printf("*****************************************************************************************\n");
            printf("Funcionario com maior salario: \n");

            printf("O nome do funcionario: %s \n", funcionario[i].nome);

            printf("O salario do funcionario: %.2f \n", funcionario[i].salario);

            printf("O identificador do funcionario: %d \n", funcionario[i].identificador);

            printf("O cargo do funcionario: %s \n", funcionario[i].cargo);
        }
    }

    for (i=0; i<N; i++){
        if (funcionario[i].salario == menor_valor){
            printf("*****************************************************************************************\n"); 
            printf("Funcionario com menor salario: \n");

            printf("O nome do funcionario: %s \n", funcionario[i].nome);

            printf("O salario do funcionario: %.2f \n", funcionario[i].salario);

            printf("O identificador do funcionario: %d \n", funcionario[i].identificador);

            printf("O cargo do funcionario: %s \n", funcionario[i].cargo);
        }
    }
}

int main(void){
    //define o número de usuários que deseja colocar os dados;
    int N;
    printf("Digite o numero de funcionarios que deseja cadastrar: ");
    scanf("%d", &N);

    struct funcionario * funcionario = (struct funcionario*) malloc(N *sizeof(struct funcionario));
    
    preenche_funcionario( funcionario, N);
    imprime_funcionario( funcionario, N);
    altera_salario(funcionario, N);
    imprime_funcionario(funcionario, N);
    compara_salario(funcionario, N);

    


    free(funcionario);
    return 0;
}
```
