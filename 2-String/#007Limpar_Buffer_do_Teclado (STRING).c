/*
FUNCAO SETBUF(STDIN, NULL) -> COLOCA NULL NO BUFFER STDIN DO TECLADO

*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    char ch;
    int i;
    for(i=0; i<5; i++){
        printf("Digite o %do caractere: ", i+1);
        scanf("%c", &ch);
        setbuf(stdin, NULL);
    }
return 0;
}
