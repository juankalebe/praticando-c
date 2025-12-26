/*26.12.25 O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg) pela altura 
(h em metros) elevada ao quadrado (IMC= m / h²). Escreva um programa que leia o peso e a altura de uma pessoa, 
calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de acordo com a tabela abaixo:
IMC 								Interpretação
Menor que 18,5 						Abaixo do peso
Entre 18,5 e menor que 25 			Peso normal
Entre 25 e menor que 30 			Sobrepeso
Entre 30 e menor que 35 			Obesidade grau 1
Entre 35 e menor que 40 			Obesidade grau 2
Maior ou igual a 40 				Obesidade grau 3
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float peso, altura,imc;
    char verificao = '\n';

	while (verificao == '\n'){
		printf("Cálculo do IMC e classificação\n");
		printf("Leituras: \n");
		printf("Peso em kg: ");
        scanf("%f",&peso);
		printf("Altura em metros: ");
        scanf("%f",&altura);
		
		imc = peso/(altura*altura);
		printf("IMC calculado: %.2f\n",imc);
		
		printf("Classificação: ");
		if (imc<18.5)
			printf("Abaixo do peso\n");
		else if (imc < 25)
			printf("Peso normal\n");
		else if (imc < 30)
			printf("Sobrepeso\n");
		else if (imc < 35)
			printf("Obesidade grau 1\n");
		else if (imc < 40)
			printf("Obesidade grau 2\n");
		else
			printf("Obesidade grau 3\n");
		
        getchar();
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }
    
    return 0;
}