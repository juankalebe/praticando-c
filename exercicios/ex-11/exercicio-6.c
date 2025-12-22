#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*18.12.25 Desenvolva um algoritmo que simule uma calculadora. Você deve dar a opção de o usuário escolher entre:
1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir. O usuário só conseguirá processar dois números inteiros por vez.*/

int main (){
    setlocale(LC_ALL, "Portuguese");

    float num2, num1;
    int escolha;

    printf("Escolha dois números para realizar uma operação matemática: (formato: AA BB) \n");
    scanf("%f%f",&num1, &num2);
    
    printf("1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir\n");
    scanf("%d",&escolha);

    switch (escolha)
    {
        case 1:
            printf("%.2f+%.2f=%.2f\n",num1, num2,num1+num2);
            break;
        case 2:
            printf("%.2f-%.2f=%.2f\n",num1, num2,num1-num2);
            break;
        case 3:
            printf("%.2f*%.2f=%.2f\n",num1, num2,num1*num2);
            break;
        case 4:
            if (num2 == 0){
                printf("Divisão por zero!\n");
                break;
            }
            printf("%.2f/%.2f=%.2f\n",num1, num2,num1/num2);
            break;
        default:
            printf("Nenhuma opção válida foi escolhida");
            break;
    }

    return 0;
}