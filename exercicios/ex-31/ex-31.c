/*26.12.25 Faça um programa para ler um número inteiro e verificar se corresponde a 
um mês válido no calendário. Caso corresponda, escreva o nome do mês, caso contrário, 
escreva a mensagem ‘Mês Inválido’.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int mes;
	//char meses[13][20] = {{"Janeiro"},{"Fevereiro"},{"Março"},{"Abril"},{"Maio"},{"Junho"},{"Julho"},{"Agosto"},{"Setembro"},{"Outubro"},{"Novembro"},{"Dezembro"}};
    char verificao = '\n';

	while (verificao == '\n'){
		printf("Leituras: \n");
		printf("Insira o número de um mês: ");
        scanf("%d",&mes);
		
		// pode ser switch case também, mas eu fiz e ficou com mais linhas
		if (mes == 1)
			printf("%d é Janeiro",mes);
		else if (mes == 2)
			printf("%d é Fevereiro",mes);
		else if (mes == 3)
			printf("%d é Março",mes);
		else if (mes == 4)
			printf("%d é Abril",mes);
		else if (mes == 5)
			printf("%d é Maio",mes);
		else if (mes == 6)
			printf("%d é Junho",mes);
		else if (mes == 7)
			printf("%d é Julho",mes);
		else if (mes == 8)
			printf("%d é Agosto",mes);
		else if (mes == 9)
			printf("%d é Setembro",mes);
		else if (mes == 10)
			printf("%d é Outubro",mes);
		else if (mes == 11)
			printf("%d é Novembro",mes);
		else if (mes == 12)
			printf("%d é Dezembro",mes);
		else
			printf("Mês Inválido");

		/*for(int i=0;i<12;i++){
			if ((mes-1) == i){
				printf("%d é %s\n",mes,meses[i]);
				break;
			}
			if (i == 11)
				printf("Mês Inválido\n");
		}*/

        getchar();
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }
    
    return 0;
}