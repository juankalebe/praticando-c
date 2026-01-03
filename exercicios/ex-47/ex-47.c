/*01.01.26 Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número 
informado é primo ou não*/

#include <stdio.h>

int main (){
    int num;
    
    do{
        printf("Insira um número maior ou igual a 2 para verificar se é primo: ");
        scanf("%d",&num);
    }while(num<2);

    for (int i=2; i <= num; i++){ 
    // para melhorar o programa eu poderia alterar num para num/2 para poder
    // diminuir a quantidade de verificações. Mas para isso eu preciso colocar
    // o print no lado de fora desse for para poder incluir o caso do num=2
        if (num % i == 0 && num != i){
            printf("%d não é primo\n",num);
            break;
        } else if(i == num)
            printf("%d é primo\n",num);
    }   
    
    return 0;
}