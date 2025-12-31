/*30.12.25 Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float nota1, nota2;
    char verif = '\n';

    while (verif == '\n'){
        // Leituras
        printf("Nota 1: ");
        scanf("%f",&nota1);
        while (nota1 < 0 || nota1 > 10){
            printf("Nota inválida. Insira novamente.\nNota 1: ");
            scanf("%f",&nota1);
        }
        printf("Nota 2: ");
        scanf("%f",&nota2);
        while (nota2 < 0 || nota2 > 10){
            printf("Nota inválida. Insira novamente.\nNota 2: ");
            scanf("%f",&nota2);
        }

        printf("Média semestral: %2.2f\n", (nota1+nota2)/2.0);

        getchar();
        printf("Pressione ENTER para repetir ou outra tecla para encerrar ");
        verif = getchar();
    }

    return 0;
}