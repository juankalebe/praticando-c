#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 16.12.25 Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

int main (){ //nao coloquei int argc, char *argv[] pq dá erro de nao uso dessas variáveis, por conta das flags que coloco no gcc
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, num4, soma;
    
    puts("Cálculo da soma de 4 números inteiros");
    printf("Insira o primeiro número inteiro: ");
    scanf("%d",&num1);
    printf("Insira o segundo número inteiro: ");
    scanf("%d",&num2);
    printf("Insira o terceiro número inteiro: ");
    scanf("%d",&num3);
    printf("Insira o quarto número inteiro: ");
    scanf("%d",&num4);
    
    soma=num1+num2+num3+num4;

    printf("O resultado da soma é %d\n", soma);

    return 0;
}