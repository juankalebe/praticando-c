#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 16.12.25 Faça um programa que receba três notas, calcule e mostre a média aritmética entra elas.

int main (){ //nao coloquei int argc, char *argv[] pq dá erro de nao uso dessas variáveis, por conta das flags que coloco no gcc
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3;
    
    puts("Cálculo da média aritmética de 3 notas");
    printf("Insira a primeira nota: ");
    scanf("%f",&nota1);
    printf("Insira a segunda nota: ");
    scanf("%f",&nota2);
    printf("Insira a terceira nota: ");
    scanf("%f",&nota3);

    printf("O resultado da média aritmética é %.2f\n", (nota1+nota2+nota3)/3);

    return 0;
}