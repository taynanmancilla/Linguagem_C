/*ALOCACAO DE ARRAYS MULTIDIMENSIONAIS (MATRIZES)
PARA ALOCAR UM ARRAY COM MAIS DE 1 DIMENSAO PRECISAMOS
UTILIZAR O CONCEITO DE "PONTEIRO PRA PONTEIRO"
*/

//PONTEIRO (1 nivel): CRIA UM VETOR
//int *p = (int*)malloc(5*sizeof(int));//Ponteiro q aponta pra um vetor

//PONTEIRO DE PONTEIRO (2 niveis): PERMITE CRIAR UMA MATRIZ
int **m; //Ponteiro q aponta pra uma matriz

//PONTEIRO DE PONTEIRO DE PONTEIRO (3 niveis): PERMITE CRIAR UM ARRAY DE 3 DIMENSOES
int ***d;

#include<stdio.h>
#include<stdlib.h>

int main(){
    /*
    EM UM PONTEIRO DE PONTEIRO, CADA NIVEL DO PONTEIRO PERMITE CRIAR
    UMA NOVA DIMENSAO DO ARRAY
    */
   //int* -> Permite criar um array de int
   //int ** -> Permite criar um array de int*

    int **p; //2 "*" = 2 niveis = 2 dimensoes
    int i, j, N=2;

    //Criar um array de ponteiros (int*) - LINHAS DA MATRIZ
    p = (int**)malloc(N * sizeof(int*)); //CADA POSICAO Eh UM int*, LOGO, CADA POSICAO PODE APONTAR PRA UM VETOR

    for(i=0; i<N; i++){
        //Criar um array de int - COLUNAS DA MATRIZ
        p[i] = (int*)malloc(N*sizeof(int));//ATRIBUINDO UM NOVO VETOR PRA CADA POSICAO
        for(j=0; j<N; j++){
            //Lendo a matriz de inteiros
            scanf("%d", &p[i][j]);
        }
    }

/**
EM UM ARRAY COM MAIS DE UMA DIMENSAO, A MEMORIA Eh LIBERADA NA ORDEM INVERSA DA ALOCACAO
*/
for(i=0; i<N; i++){
    free(p[i]); //Liberando as colunas de cada linha
}
free(p); //Liberando as linhas



return 0;
}