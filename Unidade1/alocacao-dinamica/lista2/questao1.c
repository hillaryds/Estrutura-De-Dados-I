/*Questão 1

Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um novo produto. Um número N de pessoas de ambos os sexos foi entrevistado, e o questionário consistia em apenas duas perguntas: (i) o sexo do entrevistado (M/F) e (ii) sua opinião sobre o produto (gostou/não gostou). Escreva um programa em C que:

a) leia as respostas contidas no questionário e armazene-as em dois arrays vinculados, um deles contendo a resposta para a primeira pergunta e o outro contendo a resposta para a segunda pergunta;*/


/*
#include <stdio.h>
#include <stdlib.h>

void preenche_arrays(char * sexo, char * escolha_gosto, int N){
    for(i=0; i<N; i++){
        printf("Digite o seu sexo: [M/F]");
        scanf("%s", sexo[i]);
        printf("Digite se gostou ou não: [gostou/não gostou]");
        scanf("%s", escolha_gosto[i]);
    }
}

int main(void){
    //Digitando o número de entrevistados;
    int N;
    printf("Digite o número de pessoas entrevistadas\n");
    scanf("%d", &N);

    //aloca espaços na memória
    char *sexo = (char*) malloc(N *sizeof(char*));
    char *escolha_gosto = (char*) malloc(N *sizeof(char*));

    //preenche os dois vetores que foram alocados dinamicamente;
    preenche_arrays(sexo, escolha_gosto, N);

    //libera os espaços de memória;
    free(sexo);
    free(escolha_gosto);
    return 0;
}
*/




//b) determine a porcentagem de pessoas do sexo feminino que responderam que gostaram do produto;

/*
#include <stdio.h>
#include <stdlib.h>

void preenche_arrays(char * sexo, char * escolha_gosto, int N, int *cont_sexof){
    int i;
    for (i=0; i<N; i++){
        printf("Digite o seu sexo: [M/F]");
        scanf(" %[^\n]", &sexo[i]);
        printf("Digite se gostou com Sim ou Nao: [S/N]");
        scanf(" %[^\n]", &escolha_gosto[i]);

        //comparando sexo 

        if (sexo[i] == 'F'){
            (*cont_sexof) += 1;
        }
    }
}

int main(void){
    //Digitando o número de entrevistados;
    int N;
    printf("Digite o número de pessoas entrevistadas\n");
    scanf("%d", &N);

    //Ponteiros para números de pessoas do sexo feminino;
    int sexof = 0;
    int *cont_sexof = &sexof;

    //aloca espaços na memória
    char *sexo = (char*) malloc(N *sizeof(char*));
    char *escolha_gosto = (char*) malloc(N *sizeof(char*));

    //preenche os dois vetores que foram alocados dinamicamente;
    preenche_arrays(sexo, escolha_gosto, N, &sexof);

    // calcula pessoas do sexo feminino;
    printf("A porcentagem de pessoas do sexo feminino: %d", (sexof/N)*100);



    //libera os espaços de memória;
    free(sexo);
    free(escolha_gosto);
    return 0;
}
*/




//c) determine a porcentagem de pessoas do sexo masculino que responderam que não gostaram do produto;

#include <stdio.h>
#include <stdlib.h>

void preenche_arrays(char * sexo, char * escolha_gosto, int N, float *cont_sexoF,  float *cont_sexoM, float *cont_sexoM_escolha){
    int i;
    for (i=0; i<N; i++){
        printf("Digite os dados da pesssoa %d \n", i+1);
        printf("Digite o seu sexo: [M/F]");
        scanf(" %c", &sexo[i]);
        printf("Digite se gostou com Sim ou Nao: [S/N]");
        scanf(" %c", &escolha_gosto[i]);

        //comparando sexo 

        if (sexo[i] == 'F'){
            (*cont_sexoF) += 1;
        }
        else if (sexo[i] == 'M'){
            (*cont_sexoM) += 1;
            if (escolha_gosto[i] == 'N'){
                (*cont_sexoM_escolha) += 1;   
            }
        }
    }
}

int main(void){
    //Digitando o número de entrevistados;
    int N;
    printf("Digite o numero de pessoas entrevistadas\n");
    scanf("%d", &N);

    //Ponteiros para números de pessoas do sexo feminino;
    float sexoF = 0;

    //Ponteiros para números de pessoas do sexo masculino que não gostaram;
    float sexoM = 0;
    float sexoM_escolha = 0;

    //aloca espaços na memória
    char *sexo = (char*) malloc(N *sizeof(char));
    char *escolha_gosto = (char*) malloc(N *sizeof(char));

    //preenche os dois vetores que foram alocados dinamicamente;
    preenche_arrays(sexo, escolha_gosto, N, &sexoF, &sexoM, &sexoM_escolha);

    // calcula pessoas do sexo feminino;
    if (N > 0){
    printf("A porcentagem de pessoas do sexo feminino: %.2f %%\n", (sexoF/N)*100);
    }
    else{
        printf("A porcentagem de pessoas do sexo feminino: 0.00 %%\n");
    }

    //calcula pessoas do sexo masculino que não gostaram;
    if (sexoM>0){
        printf("A porcentagem de homens que n gostaram foi de: %.2f %%", (sexoM_escolha/sexoM)*100);
    }
    else{
        printf("A porcentagem de homens que n gostaram foi de: 0.00 %%");
    }
    
    //libera os espaços de memória;
    free(sexo);
    free(escolha_gosto);
    return 0;
}
