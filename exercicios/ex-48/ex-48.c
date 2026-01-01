/*01.01.26 Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a 
quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a 
média dos salários informados, o salário mais alto e o salário mais baixo.
*/

#include <stdio.h>

int main (){
    int qtd_func;
    
    printf("Quantidade de funcionários da empresa: ");
    scanf("%d",&qtd_func);

    float salario[qtd_func], soma_sal=0;
       
    for (int i=0; i < qtd_func; i++){
        printf("Salário %d: ",i+1);
        scanf("%f",&salario[i]);
        soma_sal += salario[i];
    }

    printf("\nMédia salarial: R$%4.2f",soma_sal/qtd_func);
    
    return 0;
}