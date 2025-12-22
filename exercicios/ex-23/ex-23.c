/*22.12.25 Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float despesa, gorjeta, qtd_pessoas;
    char verificao = '\n';

    while (verificao == '\n'){
        printf("Leituras: \n");
        printf("Despesa de restaurante: R$ ");
        scanf("%f",&despesa);
        printf("Porcentagem da gorjeta: ");
        scanf("%f",&gorjeta);
        printf("Quantidade de pessoas: ");
        scanf("%f",&qtd_pessoas);

        printf("\nValor que cada um deve pagar: R$ %.2f\n",(despesa*(1+gorjeta/100))/qtd_pessoas);

        getchar();
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }
    
    return 0;
}