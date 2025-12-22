#include <stdio.h>
#include "funcoes-criadas.h"

fun calculos_funcionario(fun funcionario){
    // Salario bruto
    funcionario.sal_bruto = (funcionario.sal_minimo / 2.0) * funcionario.horas;
    
    // Salario liquido
    funcionario.sal_liquido = funcionario.sal_bruto*(1-funcionario.perc_imposto);
    
    return funcionario;
}

vcl calculos_veiculo(vcl veiculo){
    // Lucro do distribuidor
    veiculo.valor_lucro = (veiculo.perc_lucro/100)*veiculo.preco_fabrica;

    // Valor dos impostos
    veiculo.valor_impostos = veiculo.preco_fabrica*(veiculo.perc_impostos/100);

    // Preço final do veiculo
    veiculo.preco_final = veiculo.preco_fabrica + veiculo.valor_lucro + veiculo.valor_impostos;
    
    return veiculo;
}


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

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int horario_para_segundos(horario h){
    return h.hora*3600+h.minuto*60+h.segundo;
}

void segundos_para_relogio(int vetor[3],int segundos){
    vetor[0] = segundos / 3600;
    vetor[1] = (segundos%3600)/60;
    vetor[2] = ((segundos%3600)%60);  
}

horario segundos_para_relogio2(int segundos){
    horario tempo;
    tempo.hora = segundos / 3600;
    tempo.minuto = (segundos%3600)/60;
    tempo.segundo = ((segundos%3600)%60); 
    return tempo;
}