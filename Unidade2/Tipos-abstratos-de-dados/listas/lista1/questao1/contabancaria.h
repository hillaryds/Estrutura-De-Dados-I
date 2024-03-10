typedef struct contabancaria Contabancaria;


/*aloca dinamicamente uma estrutura do tipo ContaBancaria e retorna seu endereço. Os campos titular, número e saldo devem ser fornecidos como parâmetros;*/

Contabancaria * criaconta();

/* recebe, como parâmetros, o endereço de uma estrutura do tipo ContaBancaria e um valor, atualizando o saldo;*/

void deposita(Contabancaria * conta, float valor);

/*recebe, como parâmetros, o endereço de uma estrutura do tipo ContaBancaria e um valor, atualizando o saldo. Verificar se o saldo é suficiente para realizar o saque;*/

void saca(Contabancaria* conta, float valor);

/*como parâmetros, os endereços das estruturas do tipo ContaBancaria e um valor, atualizando os saldos. Verificar se o saldo é suficiente para realizar a transferência*/
void transfere(Contabancaria * remetente, Contabancaria * destinatario, float valor);

/*recebe o endereço de uma estrutura do tipo ContaBancaria e retorna seu saldo*/
void saldo(Contabancaria* conta);

/*libera o espaço alocado dinamicamente para a estrutura.*/
void excluiConta(Contabancaria* conta);