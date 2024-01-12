### Struct


A struct agrupa dados distintos em um único espaço de memória. A variável possui todos os parâmetros da estrutura a que ele está sendo associada;
O operador de acesso é o ponto (".");



```
int main(){

    struct aluno{   //atributo
        char nome[20];
        int idade;
        long int matricula;
        char email[50];
    }; //


    struct aluno a;    // a tem todos os parâmetros do struct
    a.matricula = 202210124;
    a.idade = 20;
    return 0;
}
```


Vendo o primeiro exemplo:


```
#include <stdio.h> 


//definindo a estrutura aluno
    struct aluno{ //atributo
        char nome[20];
        int idade;
        int matricula;
        char email[50];
    };

int main(){

    struct aluno aluno; // a variável aluno tem todos os parâmetros do struct
    printf("Digite o nome do aluno: \n");
    scanf(" %[^\n]", aluno.nome);//char já é um vetor
    printf("Digite a idade do aluno: \n");
    scanf(" %d", &aluno.idade);
    printf("Digite a matricula do aluno: \n");
    scanf(" %d", &aluno.matricula);
    printf("Digite o email: \n");
    scanf(" %[^\n]", aluno.email);


    return 0;
}

```


Quando a variável do tipo estruturado é um ponteiro, o operador de acesso;
Assim, (*a).idade = a->idade (sem espaço);


```
#include <stdio.h> 
#include <stdlib.h>


//definindo a estrutura aluno
    struct aluno{ //atributo
        char nome[20]; // 20 bytes
        int idade; // 4 B
        int matricula; // 4 B
        char email[50]; // 50 B
    };

int main(void){
    //usando alocação dinÂmica 
    struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
    if(estudante == NULL){
        exit(1);
    }
    printf("Digite o nome do aluno: \n");
    scanf(" %[^\n]", estudante->nome);//char já é um vetor e o endereço;
    printf("Digite a idade do aluno: \n");
    scanf(" %d", &estudante->idade);
    printf("Digite a matricula do aluno: \n");
    scanf(" %d", &estudante->matricula);
    printf("Digite o email: \n");
    scanf(" %[^\n]", estudante->email);

    free(estudante)
    return 0;
}

```


Usando uma função para preenche a variável:

```
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


```



Usando uma função para imprimir:

```
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

void imprime(struct aluno* estudante){
    printf("Nome: %s\nIdade: %d\nMatricula %d\nEmail: %s", estudante->nome, estudante->idade, estudante->matricula, estudante->email);


}

int main(void){
    //usando alocação dinÂmica 
    struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
    if(estudante == NULL){
        exit(1);
    }

    preenche(estudante);
    imprime(estudante);

    free(estudante);
    return 0;
}


```



Fazendo uma estrutura para professor:

```
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


```


Aprendendo uma nova função:

+ Typedef - renomeia a estrutura:
EX: 

```
struct professor{ //atributo
    char nome[20];
    int idade;
    int matricula;
    char email[50];
};

typedef struct aluno Aluno; //renomeia struct aluno para Aluno
```

ou

```
typedef struct professor{ //atributo
    char nome[20];
    int idade;
    int matricula;
    char email[50];
}Professor;
```

