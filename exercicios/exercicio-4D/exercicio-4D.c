#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes-criadas.h"

/*17.12.25 Desenvolva um algoritmo que receba N tempos cronometrados em segundos e diga quantas horas, 
minutos e segundos cada um possui.*/

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    int qtd;

    printf("Quantas contagens em segundos serão convertidas? ");
    scanf("%d",&qtd);

    int cronometrado[qtd];
    int hr_min_seg[qtd][3];

    //Captura de dados
    for(int i=0;i<qtd;i++){
        printf("Insira a contagem %d: ",i+1);
        scanf("%d",&cronometrado[i]);
        hr_min_seg[i][0] = cronometrado[i] / 3600;
        hr_min_seg[i][1] = (cronometrado[i]%3600)/60;
        hr_min_seg[i][2] = ((cronometrado[i]%3600)%60);        
    }
    system("clear");
    
    //Impressão de dados
    printf("============================\n");
    for(int i=0;i<qtd;i++){        
        printf("  Contagem %d: %dh %dmin %ds\n",i+1,hr_min_seg[i][0],hr_min_seg[i][1],hr_min_seg[i][2]);
    }
    printf("============================\n");

    return 0;
}