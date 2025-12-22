typedef struct horario{
    int hora, minuto, segundo;
} horario;

typedef struct vcl{
    //Recebidos
    float preco_fabrica, perc_lucro, perc_impostos;
    //Calcular
    float preco_final, valor_lucro, valor_impostos;
} vcl;

int somatorio(int vet[],int tam);
float media_aritmetica(float vetor[],int tam);
void limpar_buffer();
int horario_para_segundos(horario h);
void segundos_para_relogio(int hr_min_seg[3],int segundos);
horario segundos_para_relogio2(int segundos);
vcl calculos_veiculo(vcl veiculo);
