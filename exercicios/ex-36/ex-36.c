/*28.12.25 Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10 e apresentar a
tabuada.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int num;

    char verificao = '\n';

	while (verificao == '\n'){
		printf("Leituras:\n");
		printf("Quer a tabuada de qual número? ");
		scanf("%d",&num);
        
        printf("Tabuada do %d:\n",num);
		for (int i = 1; i <= 10; i++){
            printf("%d x %d = %d\n",num,i,num*i);
        }
        printf("\n");
		

        getchar();
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }

    return 0;
}