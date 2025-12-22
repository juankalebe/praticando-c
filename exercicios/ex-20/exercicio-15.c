/*21.12.25 Faça um programa que carregue um vetor e nove elementos numéricos inteiros, calcule e mostre 
os números primos e suas respectivas posições.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int i,j, vetor[9];
    char verificao = '\n';

    while (verificao == '\n')
    {
        // Inicializa o gerador de números aleatórios com o tempo atual (semente)
        srand(time(NULL)); 

        // Preenche o vetor do usuário com números aleatórios
        for (i = 0; i < 9; i++) {
            vetor[i] = rand() % 100; //aqui ta limitando numeros até 100
        }
        printf("Numeros inseridos aleatoriamente de 0 a 100:\n");
        for (i=0; i<9; i++){
            printf("%d ", vetor[i]);
        }
        printf("\n\n");

        /*
        Verificar se o número é primo
        Só preciso analisar para números menores do que o número a verificar
        Ou seja, o ponto de partida é o 2 e o limite é o número que tenho para verificar
        */
        for (i=0; i<9;i++){
            for (j=2; j<vetor[i];j++){ 
            //para mim o diferencial foi esse limite aqui que varia conforme o número a ser analisado. Simplificou demais
            //foi algo que eu nao pensei de verdade
                if(vetor[i]%j == 0){
                    break;
                } else if (j == (vetor[i]-1)) {
                    printf("%d é primo. Posição: %d\n",vetor[i],i);
                }
            }
        }
        printf("\n");
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }
    
    return 0;
}