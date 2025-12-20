/*20.12.25 A nota final de um estudante é calculada a partir
de três notas atribuídas respectivamente a um trabalho de Laboratório, a
uma avaliação semestral e a um exame final. A média das três notas mencionadas
anteriormente obedece aos pesos a seguir:

nota                        Peso
trabalho de Laboratório     2
avaliação semestral         3
exame final                 5

Faça um programa que receba as três notas, calcule e mostre a média
ponderada e o conceito que segue a tabela abaixo:

Média ponderada             Conceito
8~10                        A
7~8                         B
6~7                         C
5~6                         D
0~5                         E*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float t_lab, av_sem,exame_f,media_p;
    char conceito;

    printf("Insira a nota do trabalho de laboratório: ");
    scanf("%f",&t_lab);
    printf("Insira a nota da avaliação semestral: ");
    scanf("%f",&av_sem);
    printf("Insira a nota do exame final: ");
    scanf("%f",&exame_f);

    // Verificação para caso valores negativos ou maiores que o intervalo sejam inseridos
    if ((t_lab>=0 && t_lab<=10) && (av_sem>=0 && av_sem<=10) && (exame_f>=0 && exame_f<=10)){
        media_p = (t_lab*2 + av_sem*3 + exame_f*5)/10; //calculo da media ponderada

        if(media_p<5){ // ja sei que é maior ou igual a 0, entao só a menor condicao e ser menor que 5 (0 <= x < 5)
            conceito='E';
        } else if(media_p<6){ // ja sei que nao é menor do que 5, entao vejo se é menor que 6 (5 <= x < 6)
            conceito='D';
        } else if(media_p<7){ // ja sei que nao é menor do que 6, entao vejo se é menor que 7 (6 <= x < 7)
            conceito='C';
        } else if (media_p<8){ // ja sei que nao é menor do que 7, entao vejo se é menor que 8 (7 <= x < 8)
            conceito='B';
        } else{ // ja sei que nao é menor do que 8 e pode ser no máximo 10 então já está definido como 8 <= x <= 10
            conceito='A';
        }

        printf("Média ponderada: %.2f\nConceito: %c\n",media_p,conceito);
    } else{
        printf("Notas inválidas.\n"); // se alguma nota for negativa
    }
    return 0;
}