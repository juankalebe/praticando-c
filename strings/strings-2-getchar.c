#include <stdio.h>

int main() {
    char s[5];
    int c, d;
    
    /*a ideia desse programa eh eu escrever mais caracteres do que o meu scanf estah esperando 
    para ver o meu getchar funcionando. Coloquei dois getchar, pensando que o primeiro vai pegar a letra que eu
    colocar a mais do que o tamanho da string e o segundo pegar o enter, que tem codigo ascii 10
    eu testei com o simples "%s", mas so funcionou com o aprimorado*/

    printf("Digite algo (scanf aprimorado):\n");
    scanf("%4[^\n]", s); 
    c = getchar(); //pegar o primeiro na fila do buffer
    d = getchar(); //pegar o segundo na fila do buffer

    printf("letra que sobrou '%c'\n",c);
    printf("codigo ascii %d\n",c);

    printf("letra que sobrou '%d'\n",d);
    printf("codigo ascii %d\n",d);

}