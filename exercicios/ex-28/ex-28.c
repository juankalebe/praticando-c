/*24.12.25 Escreva um programa em C que leia um número e 
informe se ele é divisível por 2, por 3 ou por 5, ou se 
não é divisível por nenhum deles.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int valor;
    char verificao = '\n';

    while (verificao == '\n'){
	printf("Leituras: \n");
        printf("Valor a verificar: ");
        scanf("%d",&valor);
	
	//MINHA SOLUÇÃO
	
	printf("Saídas: \n");
	if(!(valor%2 && valor%5 && valor%3)){
		if(!(valor%2))//se for divisível o resto vai ser 0, que é falso, então eu inverto para poder executar o if
                	printf("%d é divisível por 2\n",valor);
        	if(!(valor%3))
			printf("%d é divisível por 3\n",valor);
		if(!(valor%5))
			printf("%d é divisível por 5\n",valor);
	}else
		printf("Não é divisível por 2, 3 ou 5\n");
	
	//OUTRA SOLUÇÃO APÓS RELER O ENUNCIADO
	if(!(valor%2)||!(valor%3)||!(valor%5)) // já que o enunciado não pede para dizer por qual número é divisível
		printf("É divisível por 2, 3 ou 5\n");
	else
		printf("Não é divisível por 2, 3 ou 5\n");


        getchar();
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }
    
    return 0;
}
