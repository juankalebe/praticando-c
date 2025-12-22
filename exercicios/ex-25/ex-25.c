/*22.12.25 Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dólares.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float reais;
    char verificao = '\n';

    while (verificao == '\n'){
        printf("Leituras: \n");
        printf("Valor em reais: R$ ");
        scanf("%f",&reais);

        printf("\nValor em dólares: US$ %.2f\n",reais/5.30); //1 dollar vale 5,30 reais

        getchar();
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }
    
    return 0;
}