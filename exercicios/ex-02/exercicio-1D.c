#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes-criadas.h"

// 16.12.25 Faça um programa que receba N números inteiros, calcule e mostre a soma desses números

int main (){ //nao coloquei int argc, char *argv[] pq dá erro de nao uso dessas variáveis, por conta das flags que coloco no gcc
    setlocale(LC_ALL, "Portuguese");
    int qtd_num;
    puts("Quantos números inteiros você quer somar?");
    scanf("%d", &qtd_num);

    int numeros[qtd_num];
    for(int i=0;i<qtd_num;i++){
        printf("Insira o %d°: ",i+1);
        scanf("%d",&numeros[i]);
    }
    
    printf("O resultado da soma é %d\n", somatorio(numeros,qtd_num));

    return 0;
}