#include <stdio.h>

enum dias_da_semana {Domingo = 0, Segunda, Terca, Quarta, Quinta, Sexta, Sabado}dias;

int main(void)
{
    printf("Digite o numero do dia da semana: ");
    scanf("%d", &dias);
    switch (dias)
    {
    case Domingo:
        printf("%d - Domingo", dias);
        break;
    case Segunda:
        printf("%d - Segunda-feira", dias);
        break;
    case Terca:
        printf("%d - Terca-feira", dias);
        break;
    case Quarta:
        printf("%d - Quarta-feira", dias);
        break;
    case Quinta:
        printf("%d - Quinta-feira", dias);
        break;
    case Sexta:
        printf("%d - Sexta-feira", dias);
        break;
    case Sabado:
        printf("%d - Sabado", dias);
        break;
    }
    return 0;
}