/*01.01.26 Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o 
programa deve imprimir na tela quantos números positivos e negativos foram digitados.
*/

#include <stdio.h>

int main (){
    int num, qtd_pos=0, qtd_neg=0;

    do{
        printf("Número: ");
        scanf("%d",&num);
        if (num > 0)
            qtd_pos++;
        else if (num < 0)
            qtd_neg++;
    }while(num != 0);

    printf("\nQuantidade de números positivos: %d\nQuantidade de números negativos: %d\n",qtd_pos, qtd_neg);
    
    return 0;
}