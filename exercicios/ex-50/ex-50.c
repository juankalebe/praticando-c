/*01.01.26 Faça um programa para encontrar o menor número inteiro que seja divisível por todos os 
números inteiros entre 1 e 10.*/

#include <stdio.h>

int main (){
    int num=11, div=0;

    while(!div){
        for (int i=1; i<=10; i++)
            if (num%i != 0)
                break; // se nao for divisivel por algum, já nao vai ser útil
            else if (i == 10)
                div = 1; // se até para quando dividir por 10 dá resto 0, então div é true
        if (div == 0) // somar só para quando ainda não for divisível
            num++;
    }

    printf("\nResultado: %d",num);
    
    return 0;
}