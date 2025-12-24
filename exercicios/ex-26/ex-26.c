/*24.12.25 Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float valor1,valor2,valor3, maior,menor;
    char verificao = '\n';

    while (verificao == '\n'){
        printf("Leituras: \n");
        printf("Três valores: ");
        scanf("%f%f%f",&valor1,&valor2,&valor3);
	
	//MINHA SOLUÇÃO
	/*
	//descobrindo quem é o maior
	if(valor1>=valor2 && valor1>=valor3)
		maior=valor1;
	else if(valor2>=valor1 && valor2>=valor3)
		maior=valor2;
	else if(valor3>=valor1 && valor3>=valor2)
		maior=valor3;
	
	//decobrindo quem é o menor
	if(valor1<=valor2 && valor1<=valor3)
		menor=valor1;
	else if(valor2<=valor1 && valor2<=valor3)
		menor=valor2;
	else if(valor3<=valor1 && valor3>=valor2)
		menor=valor3;
	*/
	//SEGUNDA SOLUÇÃO
	maior=valor1;
	menor=valor1;

	//descobrindo o maior
	if(valor2 > maior)
		maior = valor2;
	if(valor3 > maior)
		maior = valor3;

	//descobrindo o menor
	if(valor2 < menor)
		menor = valor2;
	if(valor3 < menor)
		menor = valor3;


        printf("Saídas: \n");
        printf("Maior: %.0f\tMenor: %.0f\n",maior,menor);

        getchar();
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }
    
    return 0;
}
