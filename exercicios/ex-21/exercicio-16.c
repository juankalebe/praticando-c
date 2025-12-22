/*21.12.25 Desenvolva um algoritmo que preencha uma matriz
numérica de dimensões 3x3. Após preencher toda a matriz, o usuário deve inserir
uma chave de busca X. Caso existe algum número igual a X dentro da matriz,
o algoritmo deve mostrar na tela os índices da linha e da coluna da posição
na qual X foi encontrado pela primeira vez. Caso contrário, o algoritmo deve se
encerrar com uma única mensagem dizendo "Chave não encontrada"*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct bus_matriz{ //busca em matriz
    int valor, linha, coluna, verif;
} bus_matriz;

void preencher_Matriz(int matriz [3][3]){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 100; //aqui ta limitando numeros até 100
        }
    }
}

void print_Matriz (int matriz[3][3]){
    for (int i = 0; i < 3; i++) {
        printf("| ");
        for (int j = 0; j < 3; j++) {
            printf("%02d ", matriz[i][j]);
        }
        printf("|\n");
    }
}

bus_matriz busca_na_Matriz(int matriz [3][3], bus_matriz x){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == x.valor){
                x.linha = i;
                x.coluna = j;
                x.verif = 1; // true
                return x;
            }
        }
    }
    return x;
}

int main (){
    int matriz[3][3]={{0,0,0},
                      {0,0,0},
                      {0,0,0}};
    char verificao = '\n';
    bus_matriz busca;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios com o tempo atual (semente)
    // Preencher a matriz
    preencher_Matriz(matriz);
    while (verificao == '\n')
    {
        busca.verif = 0;
        printf("Matriz preenchida:\n");
        print_Matriz(matriz);

        printf("Inserir chave de busca: ");
        scanf("%d",&busca.valor);
        getchar();
        busca = busca_na_Matriz(matriz,busca);

        if (busca.verif){ //se retornar 0, ele é falso e o if nao é executado
            printf("%d foi encontrado na linha %d, coluna %d\n",busca.valor,busca.linha+1,busca.coluna+1);
        }else{
            printf("Chave não encontrada");
        }

        printf("\n");
        printf("Pressione ENTER para rodar novamente ou qualquer outra tecla para finalizar ");
        verificao = getchar();
    }
    
    return 0;
}