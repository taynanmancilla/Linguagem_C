/* FUNCAO MALLOC():
SERVE PRA ALOCAR MEMORIA DURANTE A EXECUCAO DO PROGRAMA
ELA FAZ O PEDIDO DE MEMORIA AO COMPUTADOR E RETORNA UM PONTEIRO
COM O ENDERECO DE ONDE COMECA O ESPACO DE MEMORIA ALOCADO
*/

//Forma geral:
void* malloc(unsigned int num); // Retorna um ponteiro generico | void*
                                // Recebe um valor inteiro sem sinal(valores positivos) | unsigned int
                                // num: Representa a quantidade de memoria(em bytes) que queremos

/*
PONTEIRO GENERICO APONTA PRA QUALQUER TIPO DE MEMORIA(void*), A FUNCAO MALLOC NAO SABE OQ VAMOS FAZER COM A MEMORIA,
LOGO, ELA NAO PODE NOS DAR UMA MEMORIA COM UM TIPO, DESSE MODO, A CONVERTEMOS  PARA O QUE QUISERMOS
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    /*FUNCIONAMENTO:
    A funcao malloc() recebe por parametro:
    - a quantidade de bytes a ser alocada
    E retorna:
    - NULL: no caso de erro
    - ponteiro para a primeira posicao do array
    */

//EXEMPLO:
    //Cria array de 50 inteiros (200bytes)
    int *v = malloc(200); //v[0], v[1], ..., v[49]

    //Cria array de 200 char (200bytes)
    int *c = malloc(200); //c[0], c[1], ..., c[199]

//NA ALOCACAO DE MEMORIA, DEVE-SE LEVAR EM CONTA O TAMANHO DO TIPO

//EXEMPLO: Criar um array de 50 posicoes
int *v = (int *) malloc(200);
char *c = (char *) malloc(50);

//SOLUCAO: Usar SIZEOF()
int *v = (int*) malloc(50 * sizeof(int)); //malloc(50 vezes o tamanho de um inteiro) - 200bytes
char *c = (char*) malloc(50 * sizeof(char)); //malloc(50 vezes o tamanho de um char) - 50ytes

//-------------- Exemplo + Completo --------------

//SE NAO HOUVER MEMORIA SUFUCIENTE PRA ALOCAR A MEMORIA REQUISITADA, A FUNCAO malloc() RETORNA NULL

    int *p;
    p = (int *) malloc(5*sizeof(int)); //Convertendo void* do malloc pra int* e alocando 5 posicoes do tipo inteiro na variavel
    
    //TRATANDO O ERRO DE MEMORIA INSUFICIENTE
    if(p == NULL){
        printf("Erro: Sem Memoria!\n");
        exit(1); //Finaliza o programa
    }

    //APOS FAZER A ALOCACAO, PODEMOS TRABALHAR COM A VARIAVEL SENDO UM VETOR AO INVES DE PONTEIRO
    int i;
    for(i=0; i<5; i++){
        printf("Digite p[%d]: ", i);
        scanf("%d", &p[i]);
    }

    //LIBERANDO A MEMORIA ALOCADA
    free(p);

    
return 0;
}