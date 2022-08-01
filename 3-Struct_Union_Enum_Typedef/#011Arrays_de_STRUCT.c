#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main(){

    //COM STRUCT:
    struct pessoa p1, p2, p3, p4;

    //A STRUCT Eh UM TIPO DE DADO, LOGO, A LINGUAGEM C SUPORTA A DECLARAcaO DE UM ARRAY DE STRUCT

    //COM ARRAY DE STRUCT:
    struct pessoa p[4];

    /*ACESSO AOS CAMPOS DO ARRAY DE STRUCT
    '.'(PONTO) VEM DEPOIS DOS COLCHETES '[]' DO INDICE DO ARRAY*/
    p[0].idade = 31;
    strcpy(p[1].nome, "Ricardo");
    p[2].numero = p[0].numero - 1;

    /*A COMBINACAO DE ARRAYS COM STRUCTS PERMITE Q SE MANIPULE DE MODO
    MUITO MAIS PRATICO VARIAS VARIAVEIS DE ESTRUTURAS*/
    struct pessoa Pessoa[4];
    int i;
    for(i=0; i<4; i++){
        gets(Pessoa[i].nome);
        scanf("%d", &Pessoa[i].idade);
        gets(Pessoa[i].rua);
        scanf("%d", &Pessoa[i].numero);
    }

return 0;
}
