#include<stdlib.h>
#include<stdio.h>

union tipo{
    short int x; //16bits
    unsigned char c[2];//16bits
};

//!POR QUE USAR UNION?
    /*ECONOMIA DE MEMORIA: SE SEUS CAMPOS NUNCA SERAO USADOS AO MESMO TEMPO,
    NAO FAZ SENTIDO RESERVAR ESPACO PARA OS DOIS*/
int main(){
    union tipo v;
    v.x = 1545;
    printf("x = %d\n", v.x);

    v.c[0] = 'a';
    v.c[1] = 'b';
    printf("c[0] = %c\n", v.c[0]);
    printf("c[1] = %c\n", v.c[1]);

return 0;
}

//!POR QUE USAR UNION?
    /*MANIPULACAO DE BITS: UMA UNION PERMITE FAZER ACESSOS CONTROLADOS
    A NIVEL DE BITS.*/
int main(){
    short int x = 1545; //00000110 00001001 //QUEBRAR O VALOR DE 'x' EM DOIS CARACTERES
    unsigned char c0, c1;
    //OPERACOES BIT A BIT
    c0 = 0x00FF & x;//1o=00001001 -> 9 (0x00(ZERANDO 1oPARTE)FF(MANTENDO 2oPARTE))
    c1 = x >> 8;//2o=00000110 -> 6 (>> 8 DESLOCAMENTO DE 8BITS A DIREITA)
    printf("Utilizando operacoes bit a bit:\n");
    printf("x = %d\n", x);
    printf("c0 = %d\n", c0);
    printf("c1 = %d\n", c1);

    //UM DOS USOS MAIS COMUNS DE UMA UNION Eh UNIR UM TIPO BASICO UM ARRAY DE TIPOS MENORES
    union tipo u;
    printf("Utilizando UNION:\n");
    u.x = 1545; //00000110 00001001
    printf("x = %d\n", u.x);

    //NAO PRECIS FAZER OPERACAO A NIVEL DE BITS, A PROPRIA UNION SEPARA
    //AO ACESSAR CADA UMA DAS PARTES USANDO UNION, VC JA ATRIBUI AS RESPECTIVAS METADES
    printf("x = %d\n", u.c[0]);//00000110 -> 9

    printf("x = %d\n", u.c[1]);//00001001 -> 6

return 0;
}
