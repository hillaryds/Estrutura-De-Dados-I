/*Escreva um programa em C que manipula dados de um conjunto de alunos da disciplina de Estrutura de Dados e Programação da UFERSA Pau dos Ferros. Para representar um aluno são necessárias as seguintes informações: matrícula (inteiro), nome (80 caracteres), turma (caractere), três notas (reais em um vetor) e uma média (real). Seu programa deve levar em consideração que é ofertado um número máximo de vagas para a disciplina*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct aluno{
    int matricula;
    char nome[80];
    char turma;
    float notas[3];
    float media;
}Aluno;

/* função que recebe os dados de um aluno e o matricula na disciplina, caso haja vaga disponível.*/
void matricula( int n, Aluno ** alunos){
    int i;
    for (i=0; i<n; i++){
        printf("\n=====Matricula do aluno %d=====", i+1);
        
        printf("\nPreencha a matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i]->matricula);

        printf("Preencha o nome do aluno %d: ", i+1);
        scanf(" %[^\n]", alunos[i]->nome);

        printf("Preencha a turma %d: ", i + 1);
        scanf(" %c", &alunos[i]->turma);
        getchar();

        printf("\nMatricula na disciplina realizada com sucesso.");
    }
}

/*função que lança as notas e calcula a média dos alunos da disciplina. Protótipo: void lanca_notas(int n, Aluno** alunos);*/

void Lanca_notas(int n, Aluno **alunos) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\n=====Nota do aluno %d=====", i + 1);
        float media = 0; // reinicia a média para cada aluno
        int c;
        for (c = 0; c < 3; c++) {
            printf("\nPreencha a nota %d do aluno %d: ", c + 1, i + 1);
            scanf(" %f", &alunos[i]->notas[c]);
            media += alunos[i]->notas[c];
        }

        alunos[i]->media = media / 3;
    }
}

//) Função que imprime os dados de todos os alunos da disciplina.


void imprime_tudo(int n, Aluno** alunos){
    int i;
    for(i=0; i<n; i++){
        printf("\n=====Matricula do aluno %d=====", i+1);
        printf("\nMatricula: %d", alunos[i]->matricula);
        printf("\nNome: %s", alunos[i]->nome);
        printf("\nTurma: %c", alunos[i]->turma);
        int c;
        printf("\n=====Notas o aluno %d=====", i+1);
        for(c=0; c<3; c++){
            printf("\n=====Nota %d=====", c+1);
            printf("\nNota: %.2f", alunos[i]->notas[c]);
            printf("\n-----------------");
        }
        printf("\nMedia: %.2f", alunos[i]->media);
    }
}

//função que imprime os dados de todos os alunos de uma turma

void imprime_turma(int n, Aluno** alunos, char turma){
    int i;
    printf("\n-+-+-+-+-+Alunos da turma %c+-+-+-+-+-+", turma);
    for(i=0; i<n; i++){
        if (alunos[i]->turma == turma){
            printf("\n=====Dados do aluno %d=====", i+1);
            printf("\nMatricula: %d", alunos[i]->matricula);
            printf("\nNome: %s", alunos[i]->nome);
            printf("\nTurma: %c", alunos[i]->turma);
            int c;
            printf("\n-----Notas o aluno %d----", i+1);
            for(c=0; c<3; c++){
                printf("\n=====Nota %d=====", c+1);
                printf("\nNota: %.2f", alunos[i]->notas[c]);
            }
            printf("\nMedia: %.2f", alunos[i]->media);
            printf("\n===========================");
        }
    }
}

//função que imprime os alunos aprovados de uma determinada turma. Para ser aprovado, o aluno deve ter média maior que ou igual a 7,0 

void imprime_turma_aprovados(int n, Aluno**alunos, char turma){
    int i;
    printf("\n=====Alunos aprovados da turma %c=====", turma);
    for(i=0; i<n; i++){
        if (alunos[i]->turma == turma){
            if (alunos[i]->media >= 7.00){
                printf("\nNome: %s", alunos[i]->nome);
                printf("\n===========================");
            }
        }
    }
}

//void
int main(void){
    //cria as variáves que serão utilizadas:
    int n = 3; //quantidade de vagas máximas
    Aluno **alunos = (Aluno**) malloc(n * sizeof(Aluno*));

    // Alocar memória para cada aluno
    for (int i = 0; i < n; i++) {
        alunos[i] = (Aluno *)malloc(sizeof(Aluno));
    }

    //realiza a matrícula caso haja vaga
    matricula(n, alunos);

    //coloca as notas dos alunos
    Lanca_notas(n, alunos);

    //imprimir os dados dos alunos matriculados na dizciplina
    imprime_tudo(n, alunos);

    //imprimir os alunos de uma determinada turma
    char turma;
    printf("\nDigite a turma que deseja visualizar a lista de aprovados: ");
    scanf(" %c", &turma);

    imprime_turma(n, alunos, turma);

    //imprimir os aprovados de uma determinada turma
    printf("\nDigite a turma que deseja visualizar a lista de aprovados: ");
    scanf(" %c", &turma);
    imprime_turma_aprovados(n, alunos, turma);

    // Liberar memória alocada para cada aluno
    for (int i = 0; i < n; i++) {
        free(alunos[i]);
    }

    // Liberar memória alocada para o array de ponteiros de aluno
    free(alunos);

    return 0;
}