/*01.01.26 Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na 
multiplicação entre os dois números sem utilizar a operação de multiplicação.*/

#include <stdio.h>

int main (){
    int num1, num2, produto=0;
    
    printf("Número 1: ");
    scanf("%d",&num1);
    printf("Número 2: ");
    scanf("%d",&num2);

    for (int i=1; i <= num2; i++)
        produto+=num1;

    printf("\n%d x %d = %d\n",num1,num2,produto);
    
    return 0;
}