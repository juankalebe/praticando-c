#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20 //declaração de constante

void limpar_buffer() { // Função auxiliar para limpar o buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    puts("======================= strcpy =======================");
    char origem[N] = {"Olá, mundo!"};
    char destino[N];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem); 

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);
    
    puts("======================= strcat =======================");
    char s1[N] = {"Lógica de"};
    char s2[N] = {" Programação"};

    printf("Antes do strcat:\n");
    puts(s1);
    puts(s2);

    strcat(s1,s2);

    printf("Depois do strcat:\n");
    puts(s1);
    puts(s2);

    puts("======================= strlen =======================");
    char s[N];
    size_t i;

    puts("Digite um texto:");
    scanf("%[^\n]", s);
    i=strlen(s);

    printf("\nTamanho do texto: %ld\n\n",i);

    puts("Impressão de posição a posição:");
    for(i=0; i<strlen(s); i++)
        printf("%c", s[i]);
    limpar_buffer(); 
    puts("======================= strcmp =======================");
    char hardText[N] = {"/exit"};
    char senha_usr[N];
    int ok;

    puts("Digite um texto:");
    scanf("%[^\n]", senha_usr);
    
    ok=strcmp(hardText, senha_usr);

    if(ok==0)
        puts("Textos iguais");
    else
        puts("Textos diferentes");

    puts("\nfim do programa");
}
