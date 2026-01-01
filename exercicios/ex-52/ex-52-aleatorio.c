/*01.01.26 Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade, 
sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que 
informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$2000,00.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){
    int pessoas, idade, menor_id, maior_id, qtd_m2000=0;
    char sexo;
    float salario, sum_sal=0;
    
    srand(time(NULL));

    printf("Quantidade de pessoas: ");
    scanf("%d",&pessoas);

    for (int i=1; i <= pessoas; i++){
        printf("Pessoa %d:\n", i);
        idade = 18+rand()%12; //de 18 a 29
        printf("Idade - %d\n", idade);
        //scanf("%d",&idade);
        //getchar();
        if (i==1){
            menor_id = idade;
            maior_id = idade;
        }
        if (idade > maior_id)
            maior_id = idade;
        else if (idade < menor_id)
            menor_id = idade;
        do{
        sexo = 102+rand()%8; 
        }while(!(sexo == 'f' || sexo == 'm')); //109 - m e 102 - f
        printf("Sexo [f | m] - %c\n",sexo);
        //scanf("%c",&sexo);

        salario = (100000+rand()%400100)/100.00; //de 1000 a 4000 contando os números com vírgula
        printf("Salário - %.2f\n",salario);
        //scanf("%f",&salario);
        sum_sal += salario;

        if (sexo == 'f' && salario <= 2000.00)
            qtd_m2000++;
    }

    printf("Media salarial: %.2f\n",sum_sal / pessoas);
    printf("Menor idade: %d\n",menor_id);
    printf("Maior idade: %d\n",maior_id);
    printf("Quantidade de mulheres com salário até R$2000,00: %d\n", qtd_m2000);

    return 0;
}