/*
    PONTEIRO GENERICO: PODE APONTAR PARA TODOS OS TIPOS DE DADOS
    EXISTENTES OU QUE AINDA SERAO CRIADOS
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    //FORMA GERAL:
    void *p;
    int *p1, p2 = 10;
    p1 = &p2;
    p = &p2;//ENDERECO DE int

    printf("Endereco em p: %p\n", p);
    p = &p1;//ENDERECO DE int*
    printf("Endereco em p: %p\n", p);
    p = p1;//ENDERECO DE int
    printf("Endereco em p: %p\n", p);
    printf("-----------------\n");
    //PARA ACESSAR Eh PRECISO CONVERTER O PONTEIRO GENERICO PARA O TIPO COM QUAL DESEJA TRABALHAR
    void *pp;
    int p3 = 10;
    pp = &p3;

    //printf("Conteudo: %d\n", *pp);//ERRO

    printf("Conteudo: %d\n", *(int*)pp);//'*'ACESSAR CONTEUDO | '(int*)'CONVERTER PARA int || ENDERECO DESEJADO
    printf("-----------------\n");
    //OPERACOES ARITMETICAS SEMPRE SAO REALIZADAS COM BASE EM UMA UNIDADE DE MEMORIA(1BYTE)
    void *ppp = 0x5DC;//1500
    printf("ppp = %d\n", ppp);
    p++;
    printf("ppp = %d\n", ppp);//1501
    p = p + 15;
    printf("ppp = %d\n", ppp);//1516
    p = p - 2;
    printf("ppp = %d\n", ppp);//1514

return 0;
}
