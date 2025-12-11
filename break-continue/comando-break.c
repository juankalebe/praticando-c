#include <stdio.h>

/*Exemplificando o comando BREAK*/

int main(){
    int i;
    int numero;
    printf("ate que numero contar:\n");
    scanf("%d", &numero);
    printf("ok\n");
    for(i=1;i<=10;i++){
        printf("%d\n", i);
        if(i==numero){
            break; //ele aqui vai fazer com que a contagem se encerre assim que chegar nesse numero
        }
    }
    //entao o break encerra a iteracao por completo
    printf("fim do programa\n");
}
