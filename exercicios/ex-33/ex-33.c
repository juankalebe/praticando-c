/*26.12.25 Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
isso a estrutura de seleção switch.
Obs.: Considere fevereiro como tendo 28 dias.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int mes;
	//int dias_meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char verificao = '\n';

	while (verificao == '\n'){
		printf("Leituras: \n");
		printf("Insira o número de um mês: ");
        scanf("%d",&mes);
		

		switch (mes)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("O mês %d possui 31 dias\n",mes);
			break;
		case 2:
			printf("O mês %d possui 28 dias\n",mes);
			break;
		case 4: case 6: case 9: case 11:
			printf("O mês %d possui 30 dias\n",mes);
			break;
		default:
			printf("Mês Inválido\n");
		}
		/*
		if (mes == 1)
			printf("O mês %d, janeiro, possui 31 dias\n",mes);
		else if (mes == 2)
			printf("O mês %d, fevereiro, possui 28 dias\n",mes);
		else if (mes == 3)
			printf("O mês %d, março, possui 31 dias\n",mes);
		else if (mes == 4)
			printf("O mês %d, abril, possui 30 dias\n",mes);
		else if (mes == 5)
			printf("O mês %d, maio, possui 31 dias\n",mes);
		else if (mes == 6)
			printf("O mês %d, junho, possui 30 dias\n",mes);
		else if (mes == 7)
			printf("O mês %d, julho, possui 31 dias\n",mes);
		else if (mes == 8)
			printf("O mês %d, agosto, possui 31 dias\n",mes);
		else if (mes == 9)
			printf("O mês %d, setembro, possui 30 dias\n",mes);
		else if (mes == 10)
			printf("O mês %d, outubro, possui 31 dias\n",mes);
		else if (mes == 11)
			printf("O mês %d, novembro, possui 30 dias\n",mes);
		else if (mes == 12)
			printf("O mês %d, dezembro, possui 31 dias\n",mes);
		else
			printf("Mês Inválido");
		*/
		/*
		for(int i=0;i<12;i++){
			if ((mes-1) == i){
				printf("O mês %d possui %d dias\n",mes,dias_meses[i]);
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