/*04.01.26 Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
em um terceiro vetor. Imprima os três vetores na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int tam=25;
    int vetor1[tam], vetor2[tam], vetor3[tam];
    srand(time(NULL));
    for(int i=0; i<tam; i++){
        vetor1[i] = rand()%26;
        vetor2[i] = rand()%26;
        vetor3[i] = vetor1[i]+vetor2[i];
    }
    printf("Vetor 1: ");
    for(int j=0; j<tam; j++)
        printf("%2d ",vetor1[j]); 
    printf("\n");
    printf("Vetor 2: ");
    for(int j=0; j<tam; j++)
        printf("%2d ",vetor2[j]); 
    printf("\n");
    printf("Vetor 3: ");
    for(int j=0; j<tam; j++)
        printf("%2d ",vetor3[j]); 
    printf("\n");
        return 0;
}