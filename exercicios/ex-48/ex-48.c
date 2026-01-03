/*01.01.26 Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a 
quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a 
média dos salários informados, o salário mais alto e o salário mais baixo.
*/

#include <stdio.h>

int main (){
    int qtd_func;
    do{
    printf("Quantidade de funcionários da empresa: ");
    scanf("%d",&qtd_func);
    }while (qtd_func<0); // aceita 0 para caso queira finalizar os cálculos
    
    float salario[qtd_func], soma_sal=0, salarioMaior, salarioMenor;
       
    for (int i=0; i < qtd_func; i++){
        printf("Salário %d: ",i+1);
        scanf("%f",&salario[i]);
        soma_sal += salario[i];
        if(i==0){
            salarioMaior = salario[i];
            salarioMenor = salario[i];
        } else{
            if (salario[i] > salarioMaior)
                salarioMaior = salario[i];
            else if (salario[i]<salarioMenor)
                salarioMenor = salario[i];
        }
    }

    printf("\nMédia salarial: R$%4.2f",soma_sal/qtd_func);
    printf("\nMaior salário: R$%4.2f",salarioMaior);
    printf("\nMenor salário: R$%4.2f\n",salarioMenor);
    
    return 0;
}