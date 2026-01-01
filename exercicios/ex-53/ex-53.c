/*01.01.26 Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de 
pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo 
será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem 
escrever mensagem alguma).
*/

#include <stdio.h>

int main (){
    float x, y;

    do{
        printf("Coordenadas x e y: ");
        scanf("%f%f",&x,&y);

        if (x>0 && y>0)
            printf("(%.2f, %.2f) pertence ao primeiro quadrante\n", x,y);
        else if(x<0 && y>0)
            printf("(%.2f, %.2f) pertence ao segundo quadrante\n", x,y);
        else if(x<0 && y<0)
            printf("(%.2f, %.2f) pertence ao terceiro quadrante\n", x,y);
        else if(x>0 && y<0)
            printf("(%.2f, %.2f) pertence ao quarto quadrante\n", x,y);

    }while(!(x == 0 || y==0));

    return 0;
}