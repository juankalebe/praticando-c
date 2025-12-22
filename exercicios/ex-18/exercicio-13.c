/*21.12.25 Faça um programa que receba o número de horas
trabalhadas por um gestor e o valor do salário mínimo vigente. Crie uma
função que calcule o salário a receber do gestor, seguindo as regras abaixo:

i - a hora trabalhada vale a metade do salário mínimo
ii - o salário bruto equivale ao número de horas trabalhadas multiplicado pelo
valor da hora trabalhada
iii - o imposto equivale a 3% do salário bruto
iv - o salário a receber equivale ao salário bruto menos o imposto

Crie um algoritmo que invoque a respectiva função e mostre o salário a receber.*/

#include <stdio.h>
#include <stdlib.h>
#include "funcoes-criadas.h"

int main (){
    fun funcionario;
    char verificao = '0';

    while (verificao == '0')
    {
        printf("Número de horas trabalhadas: ");
        scanf("%f",&funcionario.horas);
        printf("Salário mínimo vigente: ");
        scanf("%f",&funcionario.sal_minimo);
        funcionario.perc_imposto = 3.0/100;

        funcionario = calculos_funcionario(funcionario);
        
        printf("\nSalário a receber: R$ %.2f\n",funcionario.sal_liquido);

        getchar(); // retirando o enter que sobrou no buffer após inserir esses dados
        printf("Pressione 0 para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }

    return 0;
}