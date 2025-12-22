/*21.12.25 Desenvolva um algoritmo que mostre a tabuada de todos os números inteiros compreendidos entre 1 e 10 (inclusive)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
       
    int i, j;

    for (i = 1; i <= 10; i++){
        printf("Tabuada do %d:\n",i);
        for (j = 1; j <= 10; j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
    
    printf("Pressione qualquer tecla para finalizar");
    getchar();
    return 0;
}