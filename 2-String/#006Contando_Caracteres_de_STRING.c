#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    //CONTANDO A QUANTIDADE DE VOGAIS
    char str[20] = "Linguagem C";
    char vogais[11] = "aeiouAEIOU";
    int i, j, total = 0;
    int tam1 = strlen(str);
    int tam2 = strlen(vogais);
    for(i=0; i<tam1; i++){
        for(j=0; j<tam2; j++){
            if(str[i] == vogais[j]){
                total++;
                break;
            }
        }
    }

printf("Num de vogais = %d\n", total);


return 0;
}
