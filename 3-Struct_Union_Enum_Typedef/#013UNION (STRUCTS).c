/*
A LINGUAGEM C NOS PERMITE CRIAR NOSSOS PROPRIOS TIPOS DE VARIAVEIS.
ALEM DA STRUCT, PODEMOS CRIAR UMA "UNION", TBM CHAMADA DE 'UNION'
*/
#include<stdio.h>
#include<stdlib.h>

//DEFININDO UMA UNION
union tipo{
    short int x; //INTEIRO DE 16bits
    unsigned char c; //CARACTER 8bits SEM SINAL
};

//USANDO UNION:
int main(){
    //DECLARACAO DE UMA VATIAVEL UNION
    union tipo U;//IGUAL A STRUCT

    //CADA CAMPO(VARIAVEL) DA UNION PODE SER ACESSADO USANDO OPERADOR DE '.'
    U.x = 5;
    U.c = 'a';

return 0;
}

//ALOCA 16bits
union tipoU{
    short int x; //16bits
    unsigned char c; //8bits
};
//ALOCA 24bits
struct tipoS{
    short int x; //16bits
    unsigned char c; //8bits
};

//STRUCT vs UNION
int main(){
    //STRUCT: ESPACO PARA ARMAZENAR TODOS OS SEUS ELEMENTOS
    struct tipoS v;
    v.x = 5;
    v.c = 'a';//97

    printf("STRUCT:\n");
    printf("x = %d\n", v.x);
    printf("c = %c\n", v.c);

    //UNION: ESPACO PARA ARMAZENAR APENAS O MAIOR ELEMENTO - MEMORIA COMPARTILHADA
    union tipoU u;
    u.x = 5;
    u.c = 'a';//97

    //O FATO DE SER MEMORIA COMPARTILHADA: NAO POSSO ACESSAR OS DOIS ELEMENTOS AO MESMO TEMPO
    printf("UNION:\n");
    printf("x = %d\n", u.x);//'x' Eh SOBRESCREVIDO POR 'c'
    printf("c = %c\n", u.c);

    //USAR UNION QUANDO TIVER VARIAS VARIAVEIS Q NAO SERAO USADAS AO MESMO TEMPO

return 0;
}
