/*
    PONTEIRO SO PODE RECEBER VARIAVEIS DO MESMO TIPO DE DADO(int, float...)
*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    //O ENDERECO ARMAZENADO PELO PONTEIRO SO PODE SOMAR E SUBTRAIR VALORES INTEIROS
    int *p = 0x5DC;//1500
    printf("p = %d\n", p);//1500
    p++;//int = 4bytes
    printf("p = %d\n", p);//1504
    p = p + 15;//4ytes * 15
    printf("p = %d\n", p);//1564
    p = p - 2;//4ytes * 2
    printf("p = %d\n", p);//1556
    printf("---------\n");
    //OPERACOES DEPENDEM DO TIPO DE DADO Q O PONTEIROS APONTA
    char *c = 0x5DC;//1500
    printf("c = %d\n", c);//1500
    c++;
    printf("c = %d\n", c);//1501
    printf("---------\n");
    //TAMBEM Eh POSSIVEL COMPARAR PONTEIROS
    int *point, *point1, x, y;
    point = &x;
    point1 = &y;
    if(point == point1){//PONTEIROS APONTAM PARA O MESMO LUGAR? nao
        printf("Ponteiros iguais\n");
    }else{
        printf("Ponteiros diferentes\n");
    }

    if(point > point1){//PONTEIROS 'point' ESTA NA FRENTE? nao
        printf("Point eh maior\n");
    }else{
        printf("Point eh menor\n");
    }

return 0;
}
