#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*17.12.25 Jeremias possui um cronômetro que consegue marcar o tempo apenas em segundos. 
Sabendo disso, desenvolva um algoritmo que receba o tempo cronometrado, em segundos, e diga 
quantas horas, minutos e segundos se passaram a partir do tempo cronometrado.*/

int main (){
    setlocale(LC_ALL, "Portuguese");

    int hora=0, minuto=0, segundo=0;

    printf("Insira o tempo cronometrado: ");
    scanf("%d",&segundo);

    hora = segundo / 3600;
    minuto = (segundo%3600)/60;
    segundo = ((segundo%3600)%60);

    printf("==========================");
    printf("\nSe passaram %dh %dmin %ds\n",hora, minuto, segundo);
    printf("==========================\n");

    return 0;
}