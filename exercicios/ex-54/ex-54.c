/*01.01.26 Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O 
monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com 
grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o 
primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro 
anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu.
*/

#include <stdio.h>

int main (){
    long double trigo=1;
    long double total=1;

    for(int i=1; i<=63; i++){ 
    // vai só até 63 pq o valor da primeira casa já está incluído antes do for
        printf("%.0Lf ",trigo);
        trigo = trigo*2;
        total += trigo;
        if (i%8==0)
            printf("\n");
    }

    printf("Total: %.0Lf\n",total); 
    // no windows dá problema para imprimir um número tão grande
    // aí tem que imprimir em outra função
    return 0;
}