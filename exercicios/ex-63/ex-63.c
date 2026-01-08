/*08.01.26 Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1o elemento com o último, o 2a com o penúltimo, ... até o 10a com o 11o. Imprima o vetor N
modificado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int tam=20;
    int vetor[tam];
    srand(time(NULL));
    for(int i=0; i<tam; i++){
        vetor[i] = rand()%21;
    }
    printf("Vetor: \n");
    for(int j=0; j<tam; j++)
        printf("%2d ",vetor[j]); 
    printf("\n");
    // Invertendo vetor sem variável auxiliar
    for (int k = 0; k <= 9; k++){ // fica menor ou igual a 9 pq aqui ele vai da posição 0 até a 9
        vetor[k] = vetor[k]+vetor[19-k];
        vetor[19-k] = vetor[k]-vetor[19-k];
        vetor[k] = vetor[k]-vetor[19-k];
    }
    printf("Vetor invertido: \n");
    for(int j=0; j<tam; j++)
        printf("%2d ",vetor[j]); 
    printf("\n");
        return 0;
}