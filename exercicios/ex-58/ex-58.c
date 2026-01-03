/*01.01.26 Você deve fazer um programa que apresente a sequência conforme o exemplo abaixo.
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=9
I=3 J=8
I=3 J=7
I=5 J=11
I=5 J=10
I=5 J=9
...
I=9 J=15
I=9 J=14
I=9 J=13
*/

#include <stdio.h>

int main (){
    // I: números ímpares
    // J: começa no número 7 e aí subrai 1 e printa duas vezes. Depois começa em 9 (7+2) e aí subtrai 1 e printa duas vezes. Repete o ciclo até o primeiro ser o 15
    int j=7;
    while (j<=15){
        for(int i=1; i<=9; i+=2){
            for(int k=1; k<=3; k++){
                printf("I=%d  J=%d\n",i,j);
                j--;
            }
            j+=5;
        }
    }

    // solução Wagner Gaspar
    int iy, jy;
    // fazendo relação entre I e J
    for(iy=1; iy<=9;iy+=2)
        for(jy=6+iy;jy>=4+iy;jy--)
            printf("I = %d  J = %d\n",iy,jy);

    return 0;
}