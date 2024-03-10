

typedef struct lista Lista;


/* Função que inicializa a lista atribuindo NULL*/
Lista * lst_cria(void);

/*Função que insere um novo valor no inicio da lista e retorna a nova lista*/
Lista * lst_insere(Lista * lista_original, int valor);

/*Função que imprime a lista*/
void lst_imprime(Lista * lista);

/* Função que verifica se a lista está vazia ou não*/
int lst_vazia(Lista * lista);

/*Função para criar um elemento em específico*/
Lista * lst_busca(Lista * lista, int valor_buscado);

/*Função para retirar um elemento específico da lista*/

