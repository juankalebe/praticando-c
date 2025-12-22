/*21.12.25 11) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int a,b;
    
    printf("Insira dois números inteiros (00 11): ");
    scanf("%d%d",&a,&b);

    printf("\n> Primeiro momento <\nValor de a: %d\nValor de b: %d\n",a,b);

    //Forma que pensei para fazer a troca sem variável auxiliar == Forma do professor wagner gaspar
    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n> Segundo momento <\nValor de a: %d\nValor de b: %d\n",a,b);

    getchar(); // retirando o enter que sobrou no buffer após inserir esses dados
    printf("Pressione qualquer tecla para finalizar");
    getchar();
    
    return 0;
}