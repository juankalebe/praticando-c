/*31.12.25 Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair

Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a
escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).
*/

#include <stdio.h>

int main (){
    char escolha; // para evitar loop infinito caso o usuário digite algum char em vez de int
    float num1, num2;

    do{
        printf("CALCULADORA\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n");
        scanf("%c",&escolha);
        getchar();

        //if(escolha == '1' || escolha == '2' || escolha == '3' || escolha == '4'){
        if(escolha >=49 && escolha <=52){ // usando da tabela ASCII
            printf("Primeiro número: ");
            scanf("%f", &num1);
            printf("Segundo número: ");
            scanf("%f", &num2);}

        switch (escolha){
        case '1': // somar
            printf("%.2f + %.2f = %.2f\n\n",num1,num2,num1+num2);
            break;
        case '2': // subtrair
            printf("%.2f - %.2f = %.2f\n\n",num1,num2,num1-num2);
            break;
        case '3': // multiplicar
            printf("%.2f x %.2f = %.2f\n\n",num1,num2,num1*num2);
            break;
        case '4': // dividir
            while (num2 == 0){ // caso o usuário repita 0 novamente
                printf("Operação: %.2f ÷ %.2f\n",num1,num2);
                printf("Divisor não pode ser 0. Insira novamente o segundo número: ");
                scanf("%f",&num2);
                printf("%.2f ÷ %.2f = %.2f\n\n",num1,num2,num1/num2);}
            printf("%.2f ÷ %.2f = %.2f\n\n",num1,num2,num1/num2);
            break;
        case '0': // sair
            printf("Saindo...\n");
            break;
        default:
            printf("Nenhuma opção válida escolhida\n");
        }
    }while (escolha != '0');
    
    return 0;
}