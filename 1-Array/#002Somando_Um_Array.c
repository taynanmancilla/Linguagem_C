#include<stdio.h>
#include<stdlib.h>
#define N 3

int main(){
    int tabela[N][N] = {{1,2,3}, {4,5,6}, {7,8,3}};
    int soma = 0;

    int i, j;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            soma += tabela[i][j];
        }
    }
    printf("A soma de todos os valores da tabela eh: %d", soma);


return 0;
}
