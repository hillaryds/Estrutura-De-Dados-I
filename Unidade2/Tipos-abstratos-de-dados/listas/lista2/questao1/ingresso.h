/*Arquivo interface*/

/*Definição de novo tipo: Ingresso*/
typedef struct ingresso Ingresso;


/*Função que separa duas impressões com asteriscos*/
void separador();


/*Função que cadastra os ingressos a partir do vetor de estruturas fornecido e não retorna nada*/
void preenche(Ingresso * i, int n_ingressos);


/*Função que imprime o vetor de estruturas i e não retorna nada*/
void imprime(Ingresso * i, int n_ingressos);


/*Função que altera os preços de um ingresso em específico*/
void altera_preco(Ingresso * i, int n_ingressos);

/* Função que imprime o maior e menor preço dentre os ingressos*/
void maior_menor_preco(Ingresso * i, int n_ingressos);