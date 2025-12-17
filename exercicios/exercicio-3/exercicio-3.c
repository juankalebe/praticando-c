#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*17.12.25 Faça um programa que receba o salário de um funcionário e o percentual de aumento, 
calcule e mostre o valor do aumento e o novo salário.*/

int main (){
    setlocale(LC_ALL, "Portuguese");

    float salario[1], aum_perc[1];
    
    printf("Insira o salário atual do funcionário 1: ");
    scanf("%f",&salario[0]);
    printf("Insira o percentual de aumento do salário do funcionário 1: ");
    scanf("%f",&aum_perc[0]);
    aum_perc[0] = aum_perc[0] / 100;

    printf("O valor de aumento é %.2f\n", aum_perc[0]*salario[0]);
    salario[0] = salario[0]*(1 + aum_perc[0]);
    printf("O novo salário é %.2f\n", salario[0]);
    
    return 0;
}