/*04.01.26 Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.
*/

#include <stdio.h>

int main (){
    int vetor[10], vetor2[10];
    
    for(int i=0; i<10; i++){
        printf("Valor da posição %d: ",i);
        scanf("%d",&vetor[i]);
        vetor2[i]=vetor[i]*vetor[i];
    }
    printf("\nVetor 1: ");
    for(int i=0; i<10; i++)
        printf("%d ",vetor[i]);
    printf("\nVetor 2: ");
    for(int i=0; i<10; i++)
        printf("%d ",vetor2[i]);    
    printf("\n");
    return 0;
}