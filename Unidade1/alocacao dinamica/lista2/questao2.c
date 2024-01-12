/* Questão 2 

Escreva um programa para corrigir provas de múltipla escolha. Cada prova tem N questões e cada questão vale 10/N pontos. Os primeiros dados a serem lidos são o número de questões e o gabarito da prova. Em seguida, serão lidas as respectivas respostas de um total de 10 alunos matriculados. Calcule e mostre:*/

//a) a nota obtida para cada aluno;


/*
#include <stdio.h>
#include <stdlib.h>


void preenche_gabarito(char *gabarito, int N_questions){
    int i;
    for(i = 0; i < N_questions; i++){
        printf("Gabarito da questao %d: ", i+1);
        scanf(" %c", &gabarito[i]);
    }
}

void respostas_aluno(char *gabarito, char *resposta_aluno, int N_questions, float *nota, int valor_questions){
    int i, i1;

    for (i=0; i < 10; i++){
        nota[i] = 0;
        printf("Digite as respostas do aluno %d\n", i + 1);
        for (i1 = 0; i1< N_questions; i1++){
            printf("Digite a resposta da questao %d: ", i1 + 1);
            scanf(" %c", &resposta_aluno[i1]);

            //comparando com o gabarito;
            if (resposta_aluno[i1] == gabarito[i1]){
                nota[i] = nota[i] + valor_questions;
            }
        //atribuindo uma nota para o aluno
        }
       // printf(" %f\n", nota[i]);
    }
}


void imprime_nota(float *nota){
    int i;
    for(i=0; i<10; i++){
        printf("A nota do aluno %d foi %.2f;\n", i+1, nota[i]);
    }
}
int main(void){

    //cria uam variável para ler o número de questões;
    int N_questions = 0;
    // lendo o número de questões e calculando o valor de cada questão
    printf("Digite o número de questoes da prova: ");
    scanf("%d", &N_questions);
    int valor_questions = 10/N_questions;

    // alocando um espaço de memória para o gabarito
    char *gabarito = (char*) malloc(N_questions *sizeof(char*));

    //alocando um espaço da memória para a resposta de cada aluno;
    char *resposta_aluno = (char*) malloc(N_questions *sizeof(char*));

    //alocando um espaço da memória para a nota de cada aluno:
    float *nota = (float*) malloc(N_questions*sizeof(float*));

    //resolvendo o gabarito 
    preenche_gabarito(gabarito, N_questions);

    //respostas dos alunos
    int contador = 0;
    respostas_aluno(gabarito, resposta_aluno, N_questions, nota, valor_questions);

    //imprimir as notas dos alunos

    imprime_nota(nota);

    //liberando o espaço da memória
    free(gabarito);
    free(resposta_aluno);
    free(nota);
    return 0;
}
*/

//b) a porcentagem de aprovação, sabendo-se que a nota mínima para ser aprovado é 6.

#include <stdio.h>
#include <stdlib.h>

void preenche_gabarito(char *gabarito, int N_questions){
    int i;
    for(i = 0; i < N_questions; i++){
        printf("Gabarito da questao %d: ", i+1);
        scanf(" %c", &gabarito[i]);
    }
}

void respostas_aluno(char *gabarito, char *resposta_aluno, int N_questions, float *nota, int valor_questions){
    int i, i1;

    for (i=0; i < 10; i++){
        nota[i] = 0;
        printf("Digite as respostas do aluno %d\n", i + 1);
        for (i1 = 0; i1< N_questions; i1++){
            printf("Digite a resposta da questao %d: ", i1 + 1);
            scanf(" %c", &resposta_aluno[i1]);

            //comparando com o gabarito;
            if (resposta_aluno[i1] == gabarito[i1]){
                nota[i] = nota[i] + valor_questions;
            }
        //atribuindo uma nota para o aluno
        }
       // printf(" %f\n", nota[i]);
    }
}


void imprime_nota(float *nota, float *aprovados){
    int i;
    for(i=0; i < 10; i++){
        printf("A nota do aluno %d foi %.2f e o ele estaria ", i+1, nota[i]);
        if (nota[i] >= 6.0){
            printf("Aprovado;\n");
            (*aprovados) += 1;
        }
        else{
            printf("Reprovado;\n");
        }
    }
}

int main(void){

    //cria uam variável para ler o número de questões;
    int N_questions = 0;
    // lendo o número de questões e calculando o valor de cada questão
    printf("Digite o numero de questoes da prova: ");
    scanf("%d", &N_questions);
    int valor_questions = 10/N_questions;

    // alocando um espaço de memória para o gabarito
    char *gabarito = (char*) malloc(N_questions *sizeof(char));

    //alocando um espaço da memória para a resposta de cada aluno;
    char *resposta_aluno = (char*) malloc(N_questions *sizeof(char));

    //alocando um espaço da memória para a nota de cada aluno:
    float *nota = (float*) malloc(N_questions*sizeof(float));

    //criando um ponteiro que vai guardar o número de aprovados:
    float alunosAprovados = 0;

    //resolvendo o gabarito 
    preenche_gabarito(gabarito, N_questions);

    //respostas dos alunos
    int contador = 0;
    respostas_aluno(gabarito, resposta_aluno, N_questions, nota, valor_questions);

    //imprimir as notas dos alunos
    imprime_nota(nota, &alunosAprovados);
    
    //porcentagem de aprovação
    printf("A porcentagem de alunos aprovados foi de: %.2f %%", (alunosAprovados/10)*100);

    //liberando o espaço da memória
    free(gabarito);
    free(resposta_aluno);
    free(nota);
    return 0;
}