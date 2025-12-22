/*21.12.25 O custo de um carro novo ao consumidor final é
o preço de fábrica somado ao percentual de lucro do distribuidor, acrescido
dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço
de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual
de impostos. Em cada item, crie uma função distinta para calcular e retornar:

a) o valor correspondente ao lucro do distribuidor
b) o valor correspondente aos impostos
c) o preço final do veículo

Após criar cada uma das funções, desenvolva um algoritmo que declare e invoque
cada uma das funções, mostrando o lucro do distribuidor, os impostos e o
valor final do veículo*/

#include <stdio.h>
#include <stdlib.h>
#include "funcoes-criadas.h"

int main (){
    vcl veiculo;
    char verificao = '0';

    while (verificao == '0')
    {
        printf("Preço de fábrica: ");
        scanf("%f",&veiculo.preco_fabrica);
        printf("Percentual de lucro do distribuidor (%%): ");
        scanf("%f",&veiculo.perc_lucro);
        printf("Percentual de impostos (%%): ");
        scanf("%f",&veiculo.perc_impostos);

        veiculo = calculos_veiculo(veiculo);
        
        printf("\nPreço final: R$ %.2f\n",veiculo.preco_final);
        printf("Lucro do distribuidor: R$ %.2f\n",veiculo.valor_lucro);
        printf("Impostos: R$ %.2f\n",veiculo.valor_impostos);

        getchar(); // retirando o enter que sobrou no buffer após inserir esses dados
        printf("Pressione 0 para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }

    return 0;
}