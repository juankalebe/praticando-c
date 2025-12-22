/*21.12.25 Sabe-se que o quilowatt de energia custa um milésimo do salário mínimo. Faça um procedimento
que receba o valor do salário mínimo e quantidade de quilowatts consumida por uma residência. O procedimento deve calcular
e retornar através de passagem de parâmetros por referência.

a) valor, em reais, de cada quilowatt
b) o valor, em reais, a ser pago por essa residência
c) o valor, em reais, a ser pago com desconto de 15%

Sabendo disso, desenvolva um algoritmo que peça para o usuário inserir o valor do salário mínimo e a quantidade de quilowatts
consumida. Invoque o respectivo procedimento e mostre na tela as informações dos itens a, b e c.*/

#include <stdio.h>
#include <stdlib.h>
#include "funcoes-criadas.h"

int main (){
    edf residencia1;
    float sal_minimo;
    char verificao = '0';

    while (verificao == '0')
    {
        printf("Salário mínimo vigente: ");
        scanf("%f",&sal_minimo);
        printf("Quantidade de quilowatt consumida: ");
        scanf("%f",&residencia1.kw_consumido);

        residencia1 = calculos_fatura_energia(residencia1,sal_minimo);
        
        printf("\nCusto do quilowatt: R$ %.2f\n",residencia1.kw_custo);
        printf("Fatura de energia: R$ %.2f\n",residencia1.fatura);
        printf("Fatura de energia com desconto de 15%%: R$ %.2f\n\n",residencia1.fatura_desc);
        
        getchar(); // retirando o enter que sobrou no buffer após inserir esses dados
        printf("Pressione 0 para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }

    return 0;
}