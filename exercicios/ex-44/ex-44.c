/*31.12.25 Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1 
centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.
*/

#include <stdio.h>

int main (){
    int cofre=0, investimento=1;
    int dia=1;
	while(dia <=30){
        cofre = cofre + investimento;
        investimento = investimento*2;
        dia++;
    }

    printf("\nSoma: %d\n", cofre);
    return 0;
}