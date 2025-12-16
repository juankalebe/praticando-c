#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 3

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

void limpar_buffer() { // Função auxiliar para limpar o buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    tipo_pessoa lista[TAM];
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Insira os dados (%d):\n",i+1);//aqui é para dizer que é 1 
        //quando i for 0 e assim vai (já que contamos diferentes do que os vetores)
        
        puts("Nome: ");
        scanf("%50[^\n]", lista[i].nome); //parece que precisa do & 
        //quando é um vetor de struct mesmo que o campo seja de string --> parece que nao precisa, pq deu erro no gcc
        limpar_buffer();
        
        puts("Idade: ");
        scanf("%d", &lista[i].idade);
        limpar_buffer();

        puts("Peso: ");
        scanf("%f", &lista[i].peso);
        limpar_buffer();
    }
    
    system("clear"); //esse comando (cls) em sistema windows 
    //limpa a tela de dados na execução. vamos ver no linux. no linux é o clear e tem que importar a biblioteca stdlib.h
    //pelo visto oq essa função faz é acessar o sistema e escrever algo no terminal
    
    puts("Seus dados:\n");
    for (i = 0; i < TAM; i++)
    {
        printf("---------- Pessoa %d ----------",i+1);        
        printf("\n\tNome: %s\n",lista[i].nome);
        printf("\tIdade: %d\n",lista[i].idade);
        printf("\tPeso: %.2f\n",lista[i].peso);
    }   
    puts("------------------------------\n");
}
