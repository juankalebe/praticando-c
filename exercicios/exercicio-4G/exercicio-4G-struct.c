#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes-criadas.h"

/*17.12.25 Crie um programa que leia dois horários (Largada e Chegada) no formato HH MM SS, 
calcule a duração da corrida e mostre o resultado. Use structs e funções*/

//novo tipo de struct definida na biblioteca criada

//essa solução aqui com structs é mais limpa e compreensível do que usando vetores

int main (){
    setlocale(LC_ALL, "Portuguese");
    horario largada, chegada,contagem;
    int diferenca_seg;

    printf("Digite o horário de largada (HH MM SS): ");
    scanf("%d%d%d",&largada.hora, &largada.minuto, &largada.segundo);

    printf("Digite o horário de chegada (HH MM SS): ");
    scanf("%d%d%d",&chegada.hora, &chegada.minuto, &chegada.segundo);

    diferenca_seg = horario_para_segundos(chegada) - horario_para_segundos(largada);
    if (diferenca_seg < 0)
        diferenca_seg += 24*3600; //faz-se isso para caso ocorra uma corrida de 23h até 1h, por exemplo. bug da meia noite. 
        //pode chamar de problema/caso de contorno né. EDGE CASE
    contagem = segundos_para_relogio2(diferenca_seg); 
        
    //Impressão de dados
    printf("============================\n");
        printf("  Contagem: %dh %dmin %ds\n",contagem.hora,contagem.minuto,contagem.segundo);
    printf("============================\n");

    return 0;
}