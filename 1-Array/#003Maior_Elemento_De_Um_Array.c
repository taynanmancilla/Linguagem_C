#include<stdio.h>
#include<stdlib.h>

int main(){

    int lista[5] = {3,18,25,52,38};

    int i, maior = lista[0];

    for(i=1; i<5; i++){
        if(maior < lista[i]){
            maior = lista[i];
        }
    }
printf("%d", maior);

return 0;
}
