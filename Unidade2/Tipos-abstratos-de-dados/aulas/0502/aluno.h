/*Arquivo interface e também módulo, mas como tem novos tipos além de funções, se torna TAD*/

/*Definição de novo tipo: Aluno*/
typedef struct aluno Aluno;

/*Função que aloca memoria para um sruct aluno, recebe os dadoss via teclado e retorna um ponteiro*/
Aluno * recebe_dados(void);


/*Funçao que imprime os dados de uma struct aluno, recebe a struct e não retorna nada*/
void imprime_dados(Aluno * estudante);




/*Função que libera memoria alocada, recebe a struct e não retorna nada*/
void libera(Aluno * estudante);



/*Função que matricula N alunos*/
Aluno * matricula_alunos(void);
