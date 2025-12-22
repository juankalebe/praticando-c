#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes-criadas.h"

/*17.12.25 Crie um programa que leia dois horários (Largada e Chegada) no formato HH MM SS, 
calcule a duração da corrida e mostre o resultado. Use structs e funções*/

//novo tipo de struct definida na biblioteca criada

int main (){
    setlocale(LC_ALL, "Portuguese");
    horario largada, chegada;
    int diferenca_seg, hr_min_seg[3];

    printf("Digite o horário de largada (HH MM SS): ");
    scanf("%d%d%d",&largada.hora, &largada.minuto, &largada.segundo);

    printf("Digite o horário de chegada (HH MM SS): ");
    scanf("%d%d%d",&chegada.hora, &chegada.minuto, &chegada.segundo);

    diferenca_seg = horario_para_segundos(chegada.hora,chegada.minuto,chegada.segundo) - horario_para_segundos(largada.hora,largada.minuto,largada.segundo);
    segundos_para_relogio(hr_min_seg,diferenca_seg); //a função é void. Oq tá fazendo aqui é preencher o vetor fora e depois vai
    //voltar com ele já preenchido conforme a funcao que chamei
        
    //Impressão de dados
    printf("============================\n");
        printf("  Contagem: %dh %dmin %ds\n",hr_min_seg[0],hr_min_seg[1],hr_min_seg[2]);
    printf("============================\n");

    return 0;
}