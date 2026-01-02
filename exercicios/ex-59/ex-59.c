/*01.01.26 Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y,
passando para a próxima linha a cada X números.
Exemplo de entrada:
3 99
Exemplo de saída:
1 2 3
4 5 6
7 8 9
10 11 12
...
97 98 99
*/

#include <stdio.h>

int main (){
    // X: quantidade de números por linha
    // Y: valor final
    int x, y;
    printf("X e Y: ");
    scanf("%d%d", &x,&y);

    for(int i=1;i<=y;i++){
        printf("%3d ",i);
        if(i%x==0)
            printf("\n");
    }
    printf("\n");
    return 0;
}