#include <stdio.h>

// Função auxiliar para limpar o buffer de verdade
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF); //esse getchar pega um caractere do buffer por vez 
    // e esse EOF é para quando der algum erro no programa "End Of File"
    // ai no caso ele vai pegando cada caractere ate chegar no enter (\n) e deixar limpinho para o proximo
    // o while ta ai para essa verificacao ser feita ate que seja falsa que e quando ele e igual a ao enter ou ao EOF
    // e o getchar te devolve o codigo ascii, por isso usar um int
}

int main(){
    char s[10];

    printf("Digite algo (scanf convencional):\n");
    scanf("%s", s);
    limpar_buffer(); // AQUI ESTÁ A MÁGICA

    printf("Resultado: %s\n\n", s);

    printf("Digite algo (scanf aprimorado):\n");
    scanf("%9[^\n]s", s); //esse s após o [] nem precisa de fato
    limpar_buffer(); // AQUI ESTÁ A MÁGICA - o f flush estava servindo para limpar o buffer do enter(\n), 
    // mas no linux ele nao funciona. Ai meu outro scanf estava lendo o buffer \n do scanf anterior
    printf("Resultado: %s\n\n", s);
    
    printf("\nfim do programa\n");
}
