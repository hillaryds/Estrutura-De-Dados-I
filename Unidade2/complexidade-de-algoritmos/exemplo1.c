#include <stdio.h>


//a função ocupa 8 bytes 
int max(int valor1, int valor2){
    if (valor1>valor2){
        return valor1;
    }
    else{
        return valor2;
    }
}

//exemplo do tablet
//T(max) = a(n-1) + b 
//T(max) = an -a + b 
//T(max) = an
//T(max) = n
//Notação Big-O
//T = O(n)

//verificando a complexidade de tempo de uma função 

int funcao_aula(int max1, int max2){
    int count1, count2; //C1 , 1 vez
    for(count1=0; count1<max1;count1++){ // c2 * n
        for (count2=0; count2<max2; count2++){ //c3 * n² vezes 
            printf("Exemplo da aula"); // c4 * n² vezes
        }
    }
    return 0; //c5 * 1
}

// T = c1 + nc2 + n²c3 + n²c4 + c5
// T = c1 +  c5 + nc2 + n²(c3 + c4) = a = c3+c4, b= c2, c= c1+c2
// T = an² + bn + c
//eliminar os termos constantes:
// T = an² + bn
//tirar o de menor expoente
// T = an²
//tira o membro multiplicador do de maior grau
// T = n²
//Notação Big-O
//T = O(n²)

