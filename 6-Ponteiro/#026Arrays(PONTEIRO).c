/*
    ARRAY: CONJUNTO DE DADOS ARMAZENADOS DE FORMA SEQUENCIAL
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int vet[5] = {1,2,3,4,5};
    int *p = vet;
    for(int i=0; i<5; i++){
        printf("%d\n", p[i]);//TRABALHAR COM O VETOR USANDO O PONTEIRO
    }

    printf("----------\n");
    //PONTEIRO APONTA PARA O PRIMEIRO ELEMENTO DO ARRAY
    for(int i=0; i<5; i++){
        printf("%d\n", *(p+i));//p[i] == *(p+i)
    }

    printf("----------\n");
    //NOTACAO DE COLCHETES Eh UMA SIMPLIFICACAO DO ACESSO AO CONTEUDO
    printf("vet[2] = %d\n", vet[2]);
    printf("vet[2] = %d\n", *(vet+2));

    printf("----------\n");
    //ACESSANDO O ENDERECO DE UM ELEMENTO NO ARRAY
    printf("vet[2] = %d\n", &vet[2]);
    printf("vet[2] = %d\n", (vet+2));

    printf("----------\n");
    //DECLARAR UM ARRAY DE PONTEIRO: ONDE CADA POSICAO DO VETOR GUARDA UM ENDERECO DO TIPO DE DADO INDICADO

    int *pvet[2];//ARRAY DE 2 PONTEIROS int

    //CADA ELEMENTO DO ARRAY PODE APONTAR PARA UM ENDERECO, SEJA DE UMA VARIAVEL OU DE UM ARRAY
    int x = 10, y[2] = {20, 30};
    pvet[0] = &x;//1o. POSICAO APONTANDO PARA ENDERECO DE VARIAVEL
    pvet[1] = y;//2o. POSICAO APONTANDO PARA ENDERECO DE ARRAY

    printf("pvet[0]: %p\n", pvet[0]);//&X
    printf("pvet[1]: %p\n", pvet[1]);//&y[0]

    printf("*pvet[0]: %d\n", *pvet[0]);//x (* PARA ACESSAR CONTEUDO)
    printf("pvet[1][0]: %d\n", pvet[1][0]);//pvet[POSICAODOARRAYDEPONTEIRO][POSICAODOARRAYAPONTADO]
    printf("pvet[1][1]: %d\n", pvet[1][1]);//y[1]

return 0;
}
