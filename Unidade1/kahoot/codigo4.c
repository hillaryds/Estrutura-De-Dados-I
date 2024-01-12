#include <stdio.h>
#include <stdlib.h>

//função para alocar cada vetor numa string
char *txt(char letra1, char letra2, char letra3,char letra4)
{
    char *string = (char *)malloc(5 * sizeof(char));
    string[0] = letra1;
    string[1] = letra2;
    string[2] = letra3;
    string[3] = letra4;
    string[4] = '\0';
    return string;
}

int main()
{
    char *string = (char*)malloc(5 * sizeof(char));
    char B = 'B';
    char e = 'e';
    char s = 's';
    char *CR7 = txt(B, e, s,'t');
    printf("%s\n", CR7);
    return 0;
}