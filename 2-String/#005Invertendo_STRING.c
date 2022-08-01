#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char str[20] = "Linguagem C";
    //INVERTENDO NA IMPRESS�O
    for(int i=strlen(str)-1; i>=0; i--){ // i RECEBE O ULTIMO CARACTER
        printf("%c", str[i]);
    }

    printf("\n-----------------------------\n");

    //CRIANDO UMA C�PIA INVERTIDA DA STRING
    char str2[20];
    int i, j=0;
    for(i=strlen(str)-1; i>=0; i--){
        str2[j] = str[i]; //ATRIBUINDO OS VALORES DE 'STR1' INVERSAMENTE EM 'STR2'
        j++;
    }
    str2[j] = '\0';
    printf("Copia invertida: %s", str2);

     printf("\n-----------------------------\n");

     //INVERTENDO DENTRO DA VARIAVEL ORIGINAL
     char c;
     int tam = strlen(str);
     for(i=0; i<tam/2; i++){
        c = str[i]; //'C' RECEBE O VALOR DA POSI��O DA ESQUERDA
        str[i] = str[tam-1-i];// A POSI��O DA ESQUERDA RECEBE O VALOR DA POSI��O DA DIREITA
        str[tam-1-i] = c; // A POSI��O DA DIREITA RECEBE 'C'(VALOR DA POSI��O DA ESQUERDA)
     }
     printf("Original Invertida = %s\n", str);



return 0;
}
