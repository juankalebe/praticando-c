/*01.01.26 Escreva um programa para ler as notas da primeira e da segunda avaliação de um aluno. Calcule
e imprima a média semestral. O programa deverá aceitar apenas notas válidas no intervalo [0,10].
Cada nota deve ser validada separadamente. Ao final, o usuário deve ser perguntado se deseja repetir
o calculo - se ele quiser, tudo deve ser repetido, se não, encerrar. Para a validação das notas inseridas,
faça uma verificação para o caso dele inserir letras, evitando problemas com a execução
*/

#include <stdio.h>

int main (){
    float nota1=-1, nota2=-1;
    char verif = '\n',letra;
    int vf_scan=EOF;

    while (verif == '\n'){
        // Leituras
        printf("Nota 1: ");
        vf_scan=scanf("%f",&nota1);
        if (vf_scan==0){ // ou seja, meu scanf retornou problema
            do{
                letra=getchar();
            }while (letra!='\n');
            vf_scan=EOF;
        }
        while (nota1 < 0 || nota1 > 10){
            printf("Nota inválida. Insira novamente.\nNota 1: ");
            vf_scan=scanf("%f",&nota1);
            if (vf_scan==0){ // ou seja, meu scanf retornou problema
                do{
                    letra=getchar();
                }while (letra!='\n');
                vf_scan=EOF;
            }
        }
        printf("Nota 2: ");
        vf_scan=scanf("%f",&nota2);
        if (vf_scan==0){ // ou seja, meu scanf retornou problema
            do{
                letra=getchar();
            }while (letra!='\n');
            vf_scan=EOF;
        }

        while (nota2 < 0 || nota2 > 10){
            printf("Nota inválida. Insira novamente.\nNota 2: ");
            vf_scan=scanf("%f",&nota2);
            if (vf_scan==0){ // ou seja, meu scanf retornou problema
                do{
                    letra=getchar();
                }while (letra!='\n');
                vf_scan=EOF;
            }
        }

        printf("Média semestral: %2.2f\n", (nota1+nota2)/2.0);

        getchar();
        printf("Pressione ENTER para repetir o cálculo ou outra tecla para encerrar ");
        verif = getchar();
    }

    return 0;
}