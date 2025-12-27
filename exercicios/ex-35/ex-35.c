/*26.12.25 Faça um programa que:
Recebe 3 valores inteiros ou decimais (lado A, lado B, lado C);
Valide: Nem sempre 3 linhas formam um triângulo. Para existir um triângulo, a soma de dois lados sempre deve ser maior que o terceiro lado. Exemplo que falha: Lados 10, 2 e 1. (2+1 não é maior que 10, então as pontas nunca se tocam). 
Classifique: Se passar no teste acima, diga qual é o tipo: Equilátero: Todos os 3 lados iguais; Isósceles: 2 lados iguais e 1 diferente; Escaleno: Todos os 3 lados diferentes.
Requisitos: usar operadores lógicos(and, or)
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	float lado1,lado2,lado3;
    char verificao = '\n';

	while (verificao == '\n'){
		printf("Analista de triângulos\n");
		printf("Insira os 3 possíveis lados para um triângulo: ");
		scanf("%f%f%f",&lado1,&lado2,&lado3);
		
		if (((lado1+lado2) > lado3) && ((lado1+lado3) > lado2) && ((lado2+lado3) > lado1)){
			if(lado1==lado2 && lado2==lado3)
				printf("Os lados %.2f, %.2f e %.2f formam um triângulo equilátero\n",lado1,lado2,lado3);
			else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
				printf("Os lados %.2f, %.2f e %.2f formam um triângulo isósceles\n",lado1,lado2,lado3);
			else
				printf("Os lados %.2f, %.2f e %.2f formam um triângulo escaleno\n",lado1,lado2,lado3);
		} else
			printf("Os lados %.2f, %.2f e %.2f não formam um triângulo\n",lado1,lado2,lado3);

        getchar();
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }
    
    return 0;
}