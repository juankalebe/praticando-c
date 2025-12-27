/*26.12.25 Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a 
partir de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário, 
calcule e apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	float nota1,nota2,nota3;
    char verificao = '\n', escolha;

	while (verificao == '\n'){
		printf("Média aritmética ou ponderada\n");
		printf("Opções: a. Aritmética\n        p. Ponderada (pesos: 3, 3 e 4)\n\n");
		printf("Sua opção [a ou p]: ");
		scanf("%c",&escolha);

		if(escolha == 'a' || escolha == 'p'){
			printf("\nLeituras: \n");
			printf("Insira as três notas para média: ");
			scanf("%f%f%f",&nota1,&nota2,&nota3);
			
			if (escolha == 'a')
				printf("Média aritmética: %.2f\n",(nota1+nota2+nota3)/3.0);
			else
				printf("Média ponderada: %.2f\n",(nota1*3+nota2*3+nota3*4)/10.0);
		} else
			printf("Opção inválida.\n");

        getchar();
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }
    
    return 0;
}