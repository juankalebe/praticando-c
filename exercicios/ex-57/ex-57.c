/*01.01.26 Escreva um programa que gere a saída abaixo.
Restrições:
→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
→ O \n para saltar linha pode ser utilizado no máximo 2 vezes.
*               1
**              2
***             3
****            4
*****           5
******          6
*******         7
********        8
*/

#include <stdio.h>

int main (){
    for(int i=1; i<=8; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}