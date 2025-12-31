/*30.12.25 Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
inclusive N, se for o caso.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int i=2,numero;

    // Leituras
    printf("Número inteiro: ");
    scanf("%d",&numero);
    if (numero < i)
        printf("Nenhum valor par\n");
    else{
        for(i=2;i<=numero;i+=2)
            printf("%3d ",i*i);
        printf("\n");}
    
    return 0;
}