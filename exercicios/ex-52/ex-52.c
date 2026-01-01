/*01.01.26 Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade, 
sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que 
informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$2000,00.
*/

#include <stdio.h>

int main (){
    int pessoas, idade, menor_id, maior_id, qtd_m2000=0;
    char sexo;
    float salario, sum_sal=0;

    printf("Quantidade de pessoas: ");
    scanf("%d",&pessoas);

    for (int i=1; i <= pessoas; i++){
        printf("Pessoa %d:\n", i);
        printf("Idade - ");
        scanf("%d",&idade);
        getchar();
        if (i==1){
            menor_id = idade;
            maior_id = idade;
        }
        if (idade > maior_id)
            maior_id = idade;
        else if (idade < menor_id)
            menor_id = idade;
        
        printf("Sexo [f | m] - ");
        scanf("%c",&sexo);

        printf("Salário - ");
        scanf("%f",&salario);
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