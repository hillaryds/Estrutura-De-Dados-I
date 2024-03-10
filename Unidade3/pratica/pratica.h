/*Tipo estruturado Lista*/
typedef struct lista Lista;


/* Função que inicializa a lista atribuindo NULL*/
Lista * lst_cria(void);

/*Função que insere um novo valor no inicio da lista e retorna a nova lista*/
Lista * lst_insere(Lista * lista_original, int valor);

/*Função que retorna a quantidade de números maiores que o fornecido*/
int maiores (Lista * lista_original, int valor);

/*Função que retorna o último valor da lista*/
Lista * ultimo(Lista * lista_original);