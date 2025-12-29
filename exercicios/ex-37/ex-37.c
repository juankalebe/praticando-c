/*28.12.25 Escreva um programa que repita a leitura de uma senha até que ela seja válida. 
Para cada leitura de senha incorreta informada, escrever a mensagem “Senha Invalida”. 
Quando a senha for informada corretamente deve ser impressa a mensagem “Acesso Permitido” e 
o programa deve ser encerrado. Considere que a senha correta é o valor 123456.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int senha, senhaValida=123456; //simulando os bancos de dados criptografados da realidade
    char verificao = '\n';

	while (verificao == '\n'){
		printf("Senha: ");
        scanf("%d",&senha);
        while (senha != senhaValida){
            printf("\nSenha inválida!\nSenha: ");
            scanf("%d",&senha);
        }
        
        printf("\nAcesso Permitido\n");

        getchar();
        printf("\nPressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }

    return 0;
}