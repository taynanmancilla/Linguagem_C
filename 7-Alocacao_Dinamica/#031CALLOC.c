/* FUNCAO CALLOC():
SERVE PRA ALOCAR MEMORIA DURANTE A EXECUCAO DO PROGRAMA.
ELA FAZ PEDIDO DE MEMORIA AO COMPUTADOR E RETORNA UM PONTEIRO
COM O ENDERECO DO INICIO DO ESPACO DE MEMORIA ALOCADO
*/

//Forma Geral:
void* calloc(unsigned int num, unsigned int size);  // num: QUANTIDADE DE POSICOES DE MEMORIA Q EU QUERO NO VETOR
                                                    // size: TAMANHO DE CADA POSICAO DE MEMORIA NO VETOR

/*
PONTEIRO GENERICO APONTA PRA QUALQUER TIPO DE MEMORIA(void*), A FUNCAO MALLOC NAO SABE OQ VAMOS FAZER COM A MEMORIA,
LOGO, ELA NAO PODE NOS DAR UMA MEMORIA COM UM TIPO, DESSE MODO, A CONVERTEMOS  PARA O QUE QUISERMOS
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    /*FUNCIONAMENTO:
    A funcao calloc() recebe como parametro:
    - numero de elementos no array a ser alocado
    - tamanho de cada elemento do array
    e retorna:
    - NULL: no caso de erro
    - ponteiro para a primeira posicao do array
    */

//EXEMPLO:
    //Cria um array de 50 inteiros (4 bytes cada)
    int *v = (int*)calloc(50, 4);
    //Cria array de 200 char (1 byte cada)
    char *c = (char*)calloc(200, 1);

//NA ALOCACAO DA MEMORIA, DEVE-SE LEVAR EM CONTA O TAMANHO DO TIPO

//EXEMPLO: Criar um array de tamanho 50
int *v = (int*)calloc(50, 4);
char *c = (char*)calloc(50, 1);

//SOLUCAO: Usar SIZEOF()
int *v = (int*)calloc(50, sizeof(int));
char *c = (char*)calloc(50, sizeof(char));

 //-------------- Exemplo + Completo --------------

 //SE NAO HOUVER MEMORIA SUFICIENTE PARA ALOCAR A MEMORIA REQUISITADA, A FUNCAO calloc() RETORNA NULL
    int *p;
    p = (int*)calloc(5, sizeof(int));

    //TRATANDO O ERRO DE MEMORIA INSUFICIENTE
    if(p == NULL){
        printf("Erro: Sem Memoria!\n");
        exit(1);// Termina o programa
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