/*24.12.25 Escreva um programa em C que lê 5 números inteiros, um por vez. 
Conte quantos destes valores são negativos e quantos são positivos. 
Ao final, imprima na tela a quantidade de números negativos e positivos.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int val1,val2,val3,val4,val5,positivos,negativos;
    char verificao = '\n';

    while (verificao == '\n'){
	positivos=0;
	negativos=0;
        printf("Leituras: \n");
        printf("Cinco valores inteiros positivos ou negativos: ");
        scanf("%d%d%d%d%d",&val1,&val2,&val3,&val4,&val5);
	
	//MINHA SOLUÇÃO
	
	if(val1<0)
		negativos++;
	else
		positivos++;
	if(val2<0)
		negativos++;
	else
		positivos++;
	if(val3<0)
                negativos++;
        else
                positivos++;
        if(val4<0)
                negativos++;
        else
                positivos++;
	if(val5<0)
                negativos++;
        else
                positivos++;

       
       	//SEGUNDA SOLUÇÃO
	// poderia deixar cada uma desas verificações em cada scanf. Nesse vaso seria um scanf para cada valor inserido pelo usuário
	// inclusive, poderia usar apenas uma variável para receber o que o usuário inserir
		


        printf("Saídas: \n");
        printf("Positivos: %d\tNegativos: %d\n",positivos,negativos);

        getchar();
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }
    
    return 0;
}
