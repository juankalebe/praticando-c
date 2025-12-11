#include <stdio.h>

int main(){
    int v[5]={50,40,30,20,10};
    int i;
    float s=0;

    for(i=0;i<5;i++){
        s+=v[i];
        printf("%f\n",s);
    }
    printf("Resultado: %f\n",s/5);
    
    printf("fim do programa\n");
}
