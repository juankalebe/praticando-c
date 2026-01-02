/*01.01.26 Escreva um programa que gere a saída abaixo (10 linhas, 20 * por linha).
********************
********************
********************
********************
********************
********************
********************
********************
********************
********************
Restrições:
→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
→ O \n para saltar linha pode ser utilizado no máximo 1 vez.
*/

#include <stdio.h>

int main (){
    for(int i=1; i<=200; i++){
        printf("*");
        if (i%20==0)
            printf("\n");
    }
    
    //outra forma que pensei:
    printf("\n\n"); 
    for(int i=1; i<=10; i++){
        for(int j=1; j<=20; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}