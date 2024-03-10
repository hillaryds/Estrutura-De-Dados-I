#include "disciplina.h"


typedef struct aluno Aluno;

/*aloca dinamicamente uma estrutura do tipo Aluno e retorna o seu endereço. Os campos nome e matricula devem ser fornecidos como parâmetros.*/
Aluno* cria_aluno(char nome[], int matricula);

/*matricula o aluno em uma disciplina, adicionando o ponteiro da disciplina ao array de disciplinas do aluno.*/
void matricula_disciplina(Aluno * aluno, Disciplina * disciplina);

/*libera o espaço alocado dinamicamentepara a estrutura do aluno*/
void exclui_aluno(Aluno* aluno);

/*imprime os dados do aluno*/
void imprimir_aluno(Aluno * aluno);
