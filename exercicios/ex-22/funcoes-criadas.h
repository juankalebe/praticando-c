typedef struct horario{
    int hora, minuto, segundo;
} horario;

typedef struct vcl{ //veiculo
    //Recebidos
    float preco_fabrica, perc_lucro, perc_impostos;
    //Calcular
    float preco_final, valor_lucro, valor_impostos;
} vcl;

typedef struct fun{ //funcionário
    //Recebidos
    float horas, sal_minimo, perc_imposto;
    //Calcular
    float sal_bruto, sal_liquido;
} fun;

typedef struct edf{ //edificação
    //Recebidos
    float kw_consumido;
    //Calcular
    float kw_custo, fatura, fatura_desc;
} edf;

int somatorio(int vet[],int tam);
float media_aritmetica(float vetor[],int tam);
void limpar_buffer();
int horario_para_segundos(horario h);
void segundos_para_relogio(int hr_min_seg[3],int segundos);
horario segundos_para_relogio2(int segundos);
vcl calculos_veiculo(vcl veiculo);
fun calculos_funcionario(fun funcionario);
edf calculos_fatura_energia(edf edf1, float sal_minimo);
