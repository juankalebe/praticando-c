#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*18.12.25 Faça um programa que receba dois números e mostre o maior deles. 
Caso eles sejam iguais, deve-se mostrar a mensagem "Os números são iguais".*/

int main (){
    setlocale(LC_ALL, "Portuguese");

    float num2, num1;

    printf("Insira o um número: ");
    scanf("%f",&num1);

    printf("Insira o outro número: ");
    scanf("%f",&num2);

    if (num1 > num2){
    printf("==========================");
    printf("\n%.2f é maior do que %.2f\n",num1,num2);
    printf("==========================\n");       
    } else if(num1 < num2){
    printf("==========================");
    printf("\n%.2f é maior do que %.2f\n",num2,num1);
    printf("==========================\n");         
    } else{
    printf("==========================");
    printf("\nOs números são iguais\n");
    printf("==========================\n");          
    }

    return 0;
}