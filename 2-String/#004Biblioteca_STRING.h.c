/*
<STRING.H>:
strlen - TAMANHO DA STRING
strcpy - COPIAR UMA STRING
strcat - CONCATENAR DUAS STRINGS
strcmp - COMPARAR DUAS STRINGS
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    //STRLEN() - INDICA NUMERO DE CARACTERES ARMAZENADOS PELA STRING
    char palavra[20] = "Linguagem C";
    int tamanho = strlen(palavra);

    printf("Tamanho = %d\n", tamanho);

    printf("-------------------------------------\n");
    //STRCPY - COPIAR UMA STRING
    char palavra1[20] = "Linguagem C";
    char palavra2[30];
    strcpy(palavra2, palavra1); //CONTEUDO DE 1 COPIADO EM CONTEUDO DE 2 (1, 2)

    printf("Copia = %s\n", palavra2);

    printf("-------------------------------------\n");
    //STRCAT - CONCATENAR DUAS STRINGS
    char palavra3[20] = "Hello ";
    char palavra4[30] = "Wold";
    strcat(palavra3, palavra4); //CONTEUDO DE 4 COLOCADO NO FINAL DO CONTEUDO DE 3

    printf("Juncao = %s\n", palavra3);

    printf("-------------------------------------\n");
    //STRCMP - COMPARAR DUAS STRINGS
    if(strcmp(palavra3, palavra4) == 0){
        printf("Strings Iguais\n");
    }else{
        printf("Strings Diferentes\n");
    }


return 0;
}
