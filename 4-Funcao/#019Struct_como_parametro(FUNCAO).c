#include<stdio.h>
#include<stdlib.h>

struct ponto{
    int x, y;
};
void imprime_valor(int n){
    printf("Valor = %d\n", n);
}
void soma_imprime_valor(int *n){//DECLARANDO A FUNCAO DO MESMO TIPO DOS CAMPOS DA ESTRUTURA
    *n = *n + 1;
    printf("Valor = %d\n", *n);
}
void atribui(struct ponto *p){
    (*p).x = 50;//ATRIBUINDO VALORES AOS CAMPOS DA ESTRUTURA PASSADA
    (*p).y = 60;//SEMPRE COLOCA '()' AO SE REFERIR AO PARAMETRO
    ///SIMPLIFICACAO POR SETA
    p->x = 50;
    p->y = 30;
}

int main(){
    //PASSANDO UM CAMPO "POR VALOR"
    printf("POR VALOR:\n");
    struct ponto p1 = {10,20};

    imprime_valor(p1.x);
    imprime_valor(p1.y);

    //PASSANDO UM CAMPO "REFERENCIA"
    printf("POR REFERENCIA:\n");
    struct ponto p2 = {30,40};//DECLARANDO E ATRIBUINDO VALORES AOS CAMPOS DA ESTRUTURA

    soma_imprime_valor(&p2.x);//PASSANDO O ENDERECO DO CAMPO 'x' DA ESTRUTURA
    soma_imprime_valor(&p2.y);//PASSANDO O ENDERECO DO CAMPO 'y' DA ESTRUTURA

    //PASSANDO UMA "STRUCT" POR REFERENCIA
    printf("PASSANDO UMA STRUCT POR REFERENCIA:\n");
    struct ponto p3;
    atribui(&p3);//PASSANDO A ESTRUTURA INTEIRA COMO PARAMETRO
    printf("X = %d\n", p3.x);
    printf("Y = %d\n", p3.y);

return 0;
}
