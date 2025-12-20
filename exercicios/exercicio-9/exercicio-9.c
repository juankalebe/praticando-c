/*20.12.25 Faça um programa que mostre os oito primeiros termos da sequência de Fibonacci*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int tam = 25;    
    int i, fibonacci[tam];

    fibonacci[0]=0;
    fibonacci[1]=1;
    for (i = 2; i < tam; i++)
    {
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    }
    
    printf("Primeiros %d termos da sequência de Fibonacci:\n",tam);
    for (i = 0; i < tam; i++){
        if (i == tam-1){
            printf("%d - ...",fibonacci[i]);
        }else{
            printf("%d - ",fibonacci[i]);
        }
    }
    printf("\n");
    return 0;
}