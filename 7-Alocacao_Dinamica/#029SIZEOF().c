/*
VAMOS PEDIR MEMORIA PRO COMPUTADOR NO PROCESSO DE ALOCACAO
POREM A QUANTIDADE DE MEMORIA Q VAMOS PRECISAR DEPENDE DO QUE PRETENDEMOS
GUARDAR NA MEMORIA

ALOCAR MEMORIA DO TIPO int Eh DIFERENTE DE ALOCAR MEMORIA DO TIPO char:
- TIPOS DIFERENTES POSSUEM TAMANHOS DIFERENTES DE MEMORIA

char:   1 byte
int:    4 bytes
float:  4 bytes
double: 8 bytes
*/
//PRA SABER QUANTOS BYTES VAMOS PRECISAR, USAMOS O OPERADOR 'SIZEOF()'
/*
O OPERADOR sizeof RETORNA O NUMERO DE BYTES NECESSARIOS PRA ALOCAR UM UNICO
ELEMENTO DE UM DETERMINADO TIPO DE DADO QUE O FOI PASSADO
*/

#include<stdio.h>
#include<stdlib.h>

struct ponto{
    int x, y;
};

int main(){

    //FORMA GERAL:
    sizeof(nome_do_tipo);

    //EXEMPLO:
    int x = sizeof(int); // Variavel recebe o tamanho em bytes do tipo inteiro
    printf("int: %d\n", x); // >>> 4

    //PASSANDO DIRETO
    printf("char: %d\n", sizeof(char)); // >>> 1
    printf("float: %d\n", sizeof(float)); // >>> 4
    printf("double: %d\n", sizeof(double)); // >>> 8
    printf("struct ponto: %d\n", sizeof(struct ponto)); // >>> 8 (possui 2 variaveis inteiras)

return 0;
}
