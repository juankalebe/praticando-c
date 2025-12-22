/*20.12.25 Desenvolva um algoritmo que some todos os números inteiros compreendidos entre 1 e 10 (inclusive)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int i, somatorio=0;

    for (i = 1; i <= 10; i++)
    {
        somatorio += i;
    }
    
    printf("Somatório dos números entre 1 e 10 (inclusive): %d\n",somatorio);
    return 0;
}