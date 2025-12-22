#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "funcoes-criadas.h"

/*17.12.25 Faça um programa que receba o salário de N funcionários e o percentual de aumento respectivo escrito 
como x% pelo usuário, calcule e mostre o valor do aumento e o novo salário de cada um deles.*/

int main (){
    setlocale(LC_ALL, "Portuguese");

    int qtd_aum;
    printf("Quantos funcionários terão aumento salarial? ");
    scanf("%d",&qtd_aum);

    float salario[qtd_aum], perc_dec, aux[3]={0,0,0};
    char aum_perc[qtd_aum][5]; // considerando XXX%\0
    
    for(int i=0;i<qtd_aum;i++){
        printf("Insira o salário atual do funcionário %d: ",i+1);
        scanf("%f",&salario[i]);
        limpar_buffer();
        printf("Insira o aumento em percentual (escreva X%%) do funcionário %d: ",i+1); 
        //para escrever apenas o % no printf vc precisa de outro para dar escape a ele, senao o compilador acha que é algum
        //identificador para variável 
        fgets(aum_perc[i],5,stdin);
    }
    system("clear");
    

    for(int i=0;i<qtd_aum;i++){
        for (int j = 0; j < 5; j++){
            if (aum_perc[i][j] == '%')
                break;
            aux[j] = ((int) aum_perc[i][j])-48; 
            //48 valor de 0 na tabela ASCII. Pq essa conversao vc leva para o numero da tabela ascii
        }
        if (aum_perc[i][3] == '%')
            perc_dec = (aux[0]*100 + aux[1]*10 + aux[2])/100;
        else if (aum_perc[i][2] == '%')
            perc_dec = (aux[0]*10 + aux[1])/100;
        else if (aum_perc[i][1] == '%')
            perc_dec = aux[0]/100;
        
        printf("Aumento de salário do funcionário %d: %.2f\n",i+1,salario[i]*perc_dec);
        salario[i]= salario[i]*(1+perc_dec);
        printf("Novo salário do funcionário %d: %.2f\n",i+1,salario[i]);
    }
    /*printf("Insira o salário atual do funcionário 1: ");
    scanf("%f",&salario[0]);
    printf("Insira o percentual de aumento do salário do funcionário 1: ");
    scanf("%f",&aum_perc[0]);
    aum_perc[0] = aum_perc[0] / 100;

    printf("O valor de aumento é %.2f\n", aum_perc[0]*salario[0]);
    salario[0] = salario[0]*(1 + aum_perc[0]);
    printf("O novo salário é %.2f\n", salario[0]);*/
    
    return 0;
}