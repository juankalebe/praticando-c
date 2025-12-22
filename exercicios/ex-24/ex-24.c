/*22.12.25 Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float imposto=8.0/100, diaria=45.00, dias; //sendo float abre prescedente para pagarem o valor de meio dia de trabalho
    char verificao = '\n';

    while (verificao == '\n'){
        printf("Leituras: \n");
        printf("Quantidade de dias trabalhados: ");
        scanf("%f",&dias);

        printf("\nValor líquido após o imposto de renda: R$ %.2f\n",(diaria*dias)*(1-imposto));

        getchar();
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }
    
    return 0;
}
