/*
    PONTEIROS: TIPO ESPECIAL DE VARIAVEL Q ARMAZENAM ENDERECOS DE MEMORIA 
               PERMINDO ACESSO INDIRETO A VARIAVEL APONTADA
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int x = 10; //VARIAVEL
    int *p; //PONTEIRO

    p = &x;//PONTEIRO APONTANDO NA VARIAVEL

    printf("X = %d\n", x);
    printf("&X = %d\n", &x);
    printf("p = %d\n", p);//IMPRIME ENDERECO
    printf("*p = %d\n", *p); //IMPRIME VALOR (CONTEUDO) | '*' PERMITE ACESSAR O CONTEUDO

    //'*' TAMBEM PERMITE MODIFICAR O CONTEUDO DA POSICAO DE MEMORIA APONTADA
    printf("Modificando:\n");
    *p = 12;//MODIFICANDO O VALOR
    printf("*p = %d\n", *p);
    printf("x = %d\n", x);


return 0;
}
