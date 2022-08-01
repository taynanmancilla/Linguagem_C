/*
A LINGUAGUEM NOS PERMITE CRIAR NOSSOS PROPRIOS TIPOS DE VARIAVEIS.
UM DELES Eh A "STRUCT", TAMBEM CHAMADA DE ESTRUTURA
CONCEITO: EMPACOTAR UM CONJUNTO DE DADOS A SEREM UTILIZADOS DENTRO DO PROGRAMA
*/
#include<stdlib.h>
#include<stdio.h>

//DEFININDO UMA ESTRUTURA (struct nome_struct{};) - DECLARAMOS FORA DA 'main' PARA SER GLOBAL
struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};
//POSSIBILIDADE DE VARIAS ESTRUTURAS DENTRO DE UM MESMO PROGRAMA
struct ponto2D{
    int x, y;
};
struct ponto3D{
    int x, y, z;
};

int main(){

    //DECLARACAO DE UMA VARIAVEL STRUCT
    struct pessoa p;//VARIAVEL 'p' DO TIPO 'pessoa'

    //USAR '.'(PONTO) PARA ACESSAR UM CAMPO(VARIAVEL) DA STRUCT
    p.idade = 20;//COMANDO DE ATRIBUICAO

    scanf("%d", &p.numero);//COMANDO DE LEITURA

    gets(p.nome);//COMANDO DE LEITURA

    p.numero = p.numero + p.idade - 100;//EXPRESSAO (EXEMPLO)

    struct pessoa p1, p2, p3; //VARIAS VARIAVEIS DO TIPO 'pessoa'
//---------------------------------------------------------------------
    //ESTRUTURAS DIFERENTES PODEM TER CAMPOS COM O MESMO NOME
    struct ponto2D p2D;
    struct ponto3D p3D;
    p2D.x = 10;
    p3D.x = 12;
    printf("%d %d\n", p2D.x, p3D.x);

return 0;
}
