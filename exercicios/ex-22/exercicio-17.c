/*21.12.25 Faça um programa que seja capaz de armazenar os
dados de três pessoas: nome, idade, peso e altura. Ao final, o algoritmo
deve mostrar na tela o nome e a idade da primeira pessoa e o peso e a
altura da última pessoa.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct pes{ //pessoa
    char nome[21];
    int idade;
    float altura, peso;
} pes;

void cadastroPessoa(pes pessoa[],int tam){
    for(int i=0; i<tam; i++){
        printf("Pessoa n.%d\n",i+1);
        printf("Nome: ");
        scanf("%s",pessoa[i].nome);
        printf("Idade: ");
        scanf("%d",&pessoa[i].idade);
        printf("Peso: ");
        scanf("%f",&pessoa[i].peso);
        printf("Altura: ");
        scanf("%f",&pessoa[i].altura);
    }
}

int main (){
    int qtd_pessoas;
    char verificao = '\n';

    printf("Quantidade de pessoas a cadastrar: ");
    scanf("%d",&qtd_pessoas);
    getchar();
    pes pessoas[qtd_pessoas]; //inicialização do vetor de structs

    while (verificao == '\n'){
        cadastroPessoa(pessoas,qtd_pessoas);

        printf("\n\nPrimeira pessoa\t\t\tÚltima pessoa\nNome: %s\t\t\tPeso: %.2f\nIdade: %d\t\t\tAltura: %.2f\n",pessoas[0].nome,pessoas[qtd_pessoas-1].peso,pessoas[0].idade,pessoas[qtd_pessoas-1].altura);

        getchar();
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }
    
    return 0;
}