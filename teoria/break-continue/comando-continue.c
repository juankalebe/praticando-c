#include <stdio.h>

/*Exemplificando o comando CONTINUE*/

int main(){
    int i;
    int numero;
    printf("a contagem e de 1 a 10. qual numero nao listar:\n");
    scanf("%d", &numero);
    printf("ok\n");
    for(i=1;i<=10;i++){
        if(i==numero){
            continue; /*ele aqui vai fazer com que tudo o que for depois dele seja ignorado 
            e a iteracao continue para o proximo numero. Ou seja, o que aconteceria com 
            numero escolhido nao vai ocorrer*/
        }
        printf("%d\n", i);
    }
    //entao o continue pula a iteracao da vez e deixa continuar com a proxima  
    printf("fim do programa\n");
}
