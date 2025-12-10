#include <stdio.h>

int main(){
printf("inicio do programa");
    int i;
    for(i=1;i<=10;i++){
        printf("%d ", i);
        if(i==5){
            break;
        }
    }

printf("fim do programa");
}