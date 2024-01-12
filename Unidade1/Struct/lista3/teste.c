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

        printf("Digite o salario do funcionario %s: ", (funcionario +i)->nome);
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
        printf("Digite o novo salário do funcionario %s \n", funcionario[i].nome);
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
            maior_valor, menor_valor = funcionario[i].salario;
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