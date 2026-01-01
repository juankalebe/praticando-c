/*31.12.25 Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos.*/

#include <stdio.h>
#include <stdlib.h> // para usar o srand e o rand
#include <time.h> // para usar o time

int main (){
    
    int tam = 45, cont_170=0;
    float altura_20=0.0, cont_20=0.0, idade_170 = 0.0; // coloquei idade em float para poder aproximar os cálculos para cima
    
    int idade[tam];
    float altura[tam];
    
    srand(time(NULL));
    
    for(int i=0; i<tam;i++){
        // idade
        idade[i] = 17+rand()%8; // idade até 24 anos e no mínimo 17 
        
        // altura
        altura[i] = (155+rand()%46)/100.0; // altura de 155 até 200 cm (divide por 100 para ter em metros)
        
        // printar os termos
        //printf("idade[%d] = %d\taltura[%d] = %.2f\n",i,idade[i],i,altura[i]);
    }


    for (int i = 0; i < tam; i++){
        if (altura[i] < 1.70){ // idade alunos menores que 170cm
            idade_170 += idade[i];
            cont_170++;
        }
        if (idade[i] > 20){ // altura alunos mais velhos que 20
            altura_20 += altura[i];
            cont_20+=1.0;
        }
    }
    
    // media de idade dos alunos com menos de 170cm
    idade_170 = idade_170 / cont_170;
    
    // media de altura dos alunos com mais de 20 anos
    altura_20 = altura_20 / cont_20;
    

    printf("\na) %.0f\nb) %.2f\n",idade_170,altura_20);
    return 0;
}