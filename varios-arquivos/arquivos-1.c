#include <stdio.h>

int main(int argc, char *argv[]){
    int i;

    if(argc>1){
        printf("Foram inseridos %d argumentos: \n", argc); //diz a quantidade de argumentos, incluindo o nome do programa para execução
        for(i=0;i<argc;i++){
            printf("%s\n", argv[i]); //vai imprimir cada termo inserido na linha de código para execução
        }
    } else{
        printf("Nao foram inseridos argumentos no programa.\n");
    }
}
