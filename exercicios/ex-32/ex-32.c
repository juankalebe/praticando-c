/*26.12.25 Faça um programa que peça ao usuário um caractere e diga se é uma vogal ou uma consoante.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	char letra;
    char verificao = '\n';

	while (verificao == '\n'){
		printf("Leituras: \n");
		printf("Insira uma letra: ");
        scanf("%c",&letra);
		
		if ((letra >= 65 && letra <= 90)||(letra >= 97 && letra <= 122)){
			// verificar se é uma vogal
			if (letra == 65 || letra == 97|| letra == 69|| letra == 73|| letra == 79|| letra == 85|| letra == 101|| 
				letra == 111|| letra == 117)
				printf("%c é uma vogal\n", letra);
			else
				printf("%c é uma consoante\n", letra);

		} else{
			printf("%c não é uma letra\n", letra);
			getchar();
			continue;
		}


        getchar();
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }
    
    return 0;
}