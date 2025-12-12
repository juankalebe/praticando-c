#include <stdio.h>


void limpar_buffer() { // Função auxiliar para limpar o buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    char s[10];
    /* --eu tentei usar o gets, mas o compilador nao deixou e ai eu pesquisei no google e indicou que 
    essa funcao e altamente desaconselhada pq nao limita a entrada de dados, por isso que em versoes mais novas
    do C essa funcao foi removida. e pelo oq eu vi era essa ideia que o pietro quer passar no video

    printf("Digite algo (leitura pelo gets):\n");
    gets(s);
    limpar_buffer();

    puts("Resultado: ");
    puts(s);
    puts("");
    */
    printf("Digite algo (leitura pelo fgets):\n");
    fgets(s,10,stdin); 
    //limpar_buffer(); //com essa função aqui após o fgets o compilador ficava esperando outro enter, como se o enter inicial
    // nao tivesse ido para o buffer tlgdo. Aí agora que eu tirei ela deu bom

    puts("Resultado: ");
    puts(s);
    
    puts("fim do programa");
}
