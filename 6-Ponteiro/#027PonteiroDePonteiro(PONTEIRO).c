/*
    PONTEIROS COM DIFERENTES NIVEIS DE APONTAMENTO: PONTEIRO DE PONTEIRO
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int x = 10;
    int *p = &x;
    int **p2 = &p;//PONTEIRO APONTANDO PRA OUTRO PONTEIRO

    //ENDERECO EM P2
    printf("p2: %d\n", p2);//&p

    //CONTEUDO DO ENDERECO
    printf("*p2: %d\n", *p2);//&x

    //CONTEUDO DO ENDERECO DO ENDERECO
    printf("**p2: %d\n", **p2);//x

    printf("-----------------\n");

    //Eh A QUANTIDADE DE '*' NA DECLARACAO DO PONTEIRO Q INDICA O NUMERO DE NIVEIS DO PONTEIRO
    //VARIAVEL int
    int y;
    //PONTEIRO PARA int(1 nivel)
    int *p1;
    //PONTEIRO PARA PONTEIRO DE int (2 niveis)
    int **p2;
    //PONTEIRO PARA PONTEIRO PARA PONTEIRO DE int (3niveis)
    int ***p3;

    printf("-----------------\n");
    //ACESSANDO O CONTEUDO DE UM PONTEIRO PARA PONTEIRO
    char letra = 'a';
    char *pChar = &letra;
    char **ppChar = &pChar;
    char ***pppChar = &ppChar;

    printf("*pChar: %c\n", *pChar);
    printf("**ppChar: %c\n", **ppChar);
    printf("***pppChar: %c\n", ***pppChar);

return 0;
}
