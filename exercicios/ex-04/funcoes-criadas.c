#include "funcoes-criadas.h"

int somatorio(int vetor[],int tam){
    int soma=0;
    for(int i=0;i<tam;i++)
        soma = soma + vetor[i];
    return soma;
}

float media_aritmetica(float vetor[],int tam){
    float soma=0;

    for(int i=0;i<tam;i++)
        soma = soma + vetor[i];
    return (soma/tam);
}