/*31.12.25 Faça um programa que calcule o valor de A, dado por:
A = 1 + 2 + 3 + 4 + ... + n, onde n é um número inteiro, maior que zero informado pelo usuário.*/

#include <stdio.h>

int main (){
    int limite, valorA=0;

    do{
        printf("Cálculo de A que é dado por:\nA = 1 + 2 + 3 + 4 + ... + n\nDefina um valor para n inteiro e maior do que zero: ");
        scanf("%d",&limite);
    }while (limite < 1);
    
    for(int i=1;i<=limite;i++)
        valorA += i;

    printf("A = %d\n",valorA);
    
    return 0;
}