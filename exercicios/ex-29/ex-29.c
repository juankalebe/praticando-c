/*26.12.25 Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar 
ou de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float dinheiro;
    char verificao = '\n';
	int escolha=0;

	while (verificao == '\n'){
	
	printf("Conversão entre dólares (US$) e reais (R$)\n");
    printf("Opções: 1. Converter de real para dólar\n        2. Converter de dólar para real\n\n");
	printf("Sua opção: ");
	scanf("%d",&escolha);

	switch (escolha)
	{
	case 1: // real para dólar
		printf("Leituras: \n");
        printf("Valor em reais: R$ ");
        scanf("%f",&dinheiro);

        printf("\nValor em dólares: US$ %.2f\n",dinheiro/5.30); //1 dollar vale 5,30 reais
		break;

	case 2: // dólar para real
		printf("Leituras: \n");
        printf("Valor em dólares: US$ ");
        scanf("%f",&dinheiro);

        printf("\nValor em reais: R$ %.2f\n",dinheiro*5.30); //1 dollar vale 5,30 reais
		break;
	
	default:
		printf("Escolha inválida\n");
	}
        getchar();
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }
    
    return 0;
}