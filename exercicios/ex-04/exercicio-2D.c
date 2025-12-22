#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes-criadas.h"

// 16.12.25 Faça um programa que receba N notas, calcule e mostre a média aritmética entra elas.

int main (){ //nao coloquei int argc, char *argv[] pq dá erro de nao uso dessas variáveis, por conta das flags que coloco no gcc
    setlocale(LC_ALL, "Portuguese");

    int qtd_notas;
    puts("Quantas notas serão usadas para o cálculo da média aritmética?");
    scanf("%d", &qtd_notas);

    float notas[qtd_notas];
    for(int i=0;i<qtd_notas;i++){
        printf("Insira o %d°: ",i+1);
        scanf("%f",&notas[i]);
    }
    
    printf("O resultado da média aritmética é %.2f\n", media_aritmetica(notas,qtd_notas));

    return 0;
}