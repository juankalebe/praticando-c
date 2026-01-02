/*01.01.26 Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3
centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários
para que Zé seja maior que Chico.
*/

#include <stdio.h>

int main (){
    // chico: 150m e cresce 2cm por ano
    // zé tem 110 cm e cresce 3 cm por ano
    // calcular quantos anos para Zé ser maior que chico

    float altura_z=110.00, altura_c=150.00;
    int anos=0;
    printf("ANO: %d   ZÉ: %.2f   CHICO: %.2f\n",anos,altura_z,altura_c);

    while (altura_z <= altura_c){
        altura_z += 3;
        altura_c += 2;
        anos++;
        printf("ANO: %d   ZÉ: %.2f   CHICO: %.2f\n",anos,altura_z,altura_c);
    }

    printf("%d anos para Zé ser maior do que Chico\n", anos);
    

    return 0;
}