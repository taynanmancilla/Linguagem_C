/* FUNCAO REALLOC();
SERVE PRA ALOCAR OU REALOCAR MEMORIA DURANTE A EXECUCAO DO PROGRAMA
ELA FAZ O PEDIDO DE MEMORIA AO COMPUTADOR E RETORNA UM PONTEIRO COM
O ENDERECO DO INICIO DO ESPACO DE MEMORIA ALOCADO
*/

//Forma Geral:
void* realloc(void* ptr, unsigned int num); //ptr: PONTEIRO ONDE SE TINHA ALOCADO MEMORIA PREVIAMENTE, PRA PODER REALOCAR
                                            //num: TAMANHO (em bytes) DA QUANTIDADE DE MEMORIA DESEJADA


#include<stdio.h>
#include<stdlib.h>

int main(){
    /*FUNCIONAMENTO:
    A FUNCAO realloc() RECEBE POR PARAMETRO:
    - ponteiro pra um bloco de memoria ja alocado
    - a quantidade de bytes a ser alocada
    e retorna:
    - NULL: no caso de erro
    - ponteiro para a primeira posicao do array
    */

//EXEMPLO:
    //Cria array de 50 inteiros(200bytes)
    int *v = (int*)malloc(200);

    //Aumenta a memoria alocada pra 100 inteiros(200bytes)
    v = (int*)realloc(v, 400);

//COMO SABEMOS, NAO Eh INTERESSANTE TRABALHAR COM VALORES ABSOLUTOS EM BYTES, TAMANHO DOS TIPOS VARIAM DE SISTEMA PRA SISTEMA

//Exemplo:
    int *v = (int*)malloc(200);
    v = (int*)realloc(v, 400);

//Solucao:
    int *v = (int*)malloc(50*sizeof(int));
    v = (int*)realloc(v, 100 * sizeof(int));

/*
SE O PONTEIRO PARA O BLOCO DE MEMORIA PREVIAMENTE ALOCADO FOR NULL, 
A FUNCAO realloc() IRA ALOCAR MEMORIA DA MESMA FORMA COMO A FUNCAO malloc()
*/
int *p;
//O COMANDO ABAIXO
p = (int*)realloc(NULL, 50*sizeof(int)); //NULL: NAO EXISTE NENHUM VETOR ALOCADO, LOGO, ELE ALOCA ESSE ESPACO
//EQUIVALE A
p = (int*)malloc(50*sizeof(int));

/*
SE O TAMANHO DE MEMORIA SOLICITADO FOR IGUAL A ZERO, realloc IRA
LIBERAR A MEMORIA DA MESMA FORMA COMO A FUNCAO free()
*/

int *p = (int*) malloc(50*sizeof(int));

//O COMANDO ABAIXO
p = (int*)realloc(p, 0); // REALOCANDO p A ZERO BYTES DE MEMORIA
//EQUIVALE A
free(p);

/*CUIDADO
SE NAO HOUVER MEMORIA SUFICIENTE PARA ALOCAR A MEMORIA REQUISITADA,
A FUNCAO realloc() RETORNA NULL
*/
    int *p = (int*)malloc(5*sizeof(int));
    int *p1 = (int*)realloc(p, 15*sizeof(int)); /*ATRIBUIMOS A UMA VARIAVEL DIFERENTE(p1) PQ SE DER ERRO, IRA RETORNAR NULL EM p1
                                                 E A VARIAVEL p CONTINUARA INTACTA, POIS SE RETORNARMOS O realloc() DIRETO EM p, VAMOS
                                                 PERDE-LO SE DER ERRO NO PROGRAMA*/

    if(p1 != NULL){ //se nao der erro
        p = p1; //copia a informacao
    }

    //LIBERA MEMORIA ALOCADA
    free(p);

return 0;
}