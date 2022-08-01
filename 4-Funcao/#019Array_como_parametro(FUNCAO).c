#include<stdio.h>
#include<stdlib.h>
/*
    ARRAYS SEMPRE SAO PASSADOS POR REFERENCIA PARA UMA FUNCAO
    EVITANDO COPIA DESNECESSARIA DE GRANDES QUANTIDADES DE DADOS
    PARA OUTRAS AREAS DE MEMORIA DURANTE A CHAMADA DA FUNCAO,
    O Q AFETARIA O DESEMPENHO DO PROGRAMA
*/

///FORMA GERAL
void imprime(int *n, int m){//ONDE '*n' Eh A POSICAO DE MEMORIA DO VETOR, E 'm' Eh O TAMANHO DO VETOR
    int i;
    for(i=0; i<m; i++){
        printf("%d\n", n[i]);//NAO NECESSITA USAR O '*' AO SE REFERIR DENTRO DA FUNCAO
    }
}
int main(){
    /*NA CHAMADA DA FUNCAO SE USA APENAS O NOME DO ARRAY
    (SEM COLCHETE E INDICE), E SEM O OPERADOR DE '&'*/

    int v[5] = {1,2,3,4,5};
    imprime(v, 5);

return 0;
}

///MATRIZ:
void imprime_matriz(int m[][2], int n){//EM MATRIZ NAO PRECISA INFORMAR A QUANTIDADE DE LINHAS, SOMENTE A DE COLUNAS
    int i, j;                          //PRA ELE PODER SABER QUANTO DE MEMORIA ELE TEM Q PULAR PRA CHEGAR NA PROXIMA LINHA
    for(i=0; i<n; i++){
        for(j=0; j<2; j++){
            printf("%d \n", m[i][j]);
        }
    }
}
int main(){
    /*ARRAYS COM MAIS DE UMA DIMENSAO PRECISAM DA INFORMACAO
    DO TAMANHO DAS OUTRAS DIMENSOES*/

    int mat[3][2] = {{1,2},{3,4},{5,6}};
    imprime_matriz(mat, 3);//NAO PRECISA DO '&',O NOME DA MATRIZ JA Eh O ENDEERECO DE ONDE ELA COMECA NA MEMORIA
                          //'3' Eh O TAMANHO DA MATRIZ(n)(QNT DE LINHAS)

return 0;
}
