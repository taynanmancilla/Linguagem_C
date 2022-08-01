//TypeDef PERMITE QUE O PROGRAMADOR DEFINA UM "APELIDO" PARA UM TIPO DE DADO
#include<stdio.h>
#include<stdlib.h>

//CRIA UM SINONIMO PARA INT
typedef int inteiro;
int main(){
    //'INT' e 'INTEIRO' SAO O MESMO TIPO
    int x = 10;
    inteiro y = 20; //'y' VARIAVEL DO MESMO TIPO QUE 'x'
    y = y + x;
    printf("Soma = %d\n", y);

return 0;
}

//SIMPLIFICANDO A DECLARACAO DE STRUCT
struct cadastro{
    char nome[50], rua[50];
    int idade, numero;
 };
 typedef struct cadastro cad; //SIMPLIFICANDO A DECLARACAO DE ESTRUTURAS
 int main(){
    //"STRUCT CADASTRO" E "CAD" SAO O MESMO TIPO

    struct cadastro cl; //DEFININDO VARIAVEL DO TIPO ESTRUTURA
    cad c2;//DEFININDO VARIAVEL COM A SIMPLIFICACAO DO TypeDef

 return 0;
 }

/*O COMANDO TypeDef DEVE SER USADO COM CUIDADO POIS ELE PODE PRODUZIR DECLARACOES CONFUSAS.
NO CASO, "POSITIVOS" Eh UM SINONIMO PARA "ARRAY DE 5 INTEIROS POSITIVOS"*/
typedef unsigned positivos[5]; //DECLARANDO VETOR DE 5 ELEMENTOS DO TIPO INTEIRO SEM SINAL
int main(){
    positivos v = {10,20,30,40,50};//'v' Eh UM VETOR DE 5 ELEMENTOS DO TIPO INTEIRO SEM SINAL
    int i;
    for(i=0; i<5; i++){
        printf("v[%d]: %d\n", i,v[i]);
    }
    //FAZENDO DESSA FORMA, FICA UMA DECLARACAO CONFUSA
    //NAO VALENDO APENA USAR EM PROGRAMAS GRANDES(MUITAS LINHAS)

return 0;
}
