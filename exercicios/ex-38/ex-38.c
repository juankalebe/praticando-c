/*29.12.25 Faça um programa que some os números ímpares entre 
1 e 1000 e imprima a resposta. O bloco de repetição deve executar no máximo 500 vezes.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int i=1, soma=0;

	while (i < 1000){
		soma += i;
        i += 2;
    }

    printf("Somatório números ímpares de 1 a 1000: %d\n", soma);
    return 0;
}