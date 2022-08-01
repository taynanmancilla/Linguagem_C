/*UMA ESTRUTURA TAMBEM Eh UM TIPO DE DADO.
LOGO, UMA ESTRUTURA PODE POSSUIR UMA VARIAVEL DO TIPO DE OUTRA STRUCT PREVIAMENTE DEFINIDA A ISSO CHAMAMOS*/
//**ESTRUTURAS ANINHADAS:**//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct endereco{
    char rua[50];
    int numero;
};

struct pessoa{
    char nome[50];
    int idade;
    struct endereco ender //DECLARANDO UMA VARIAVEL 'ender' DO TIPO struct'endereco'
};
int main(){
    struct pessoa p;
    p.idade = 31;
    p.ender.numero = 101; //IR USANDO '.' PARA ACESSAR AS VARIAVEIS DAS ESTRUTURAS

    //!!!NAO EXISTE LIMITE DE ANINHAMENTO!!!

return 0;
}
