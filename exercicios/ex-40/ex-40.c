/*30.12.25 Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int i=7;
    int count=0;

    while (i < 9999){
        printf("%4d ",i);
        i+=7;
        count++;
        if (count%28 == 0)
            printf("\n");
        
    }
    return 0;
}