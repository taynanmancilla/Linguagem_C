/**PASSAGEM POR VALOR: UMA COPIA DO DADO Eh FEITA E PASSADA PARA A FUNCAO**/
#include<stdio.h>
#include<stdlib.h>

void soma_mais_um(int n){//UMA COPIA DE 'x' Eh FEITA PARA 'n', OU SEJA, n = X
    n = n+1;
    printf("Dentro da funcao: x = %d\n", n);//6
}

int main(){
    //EXEMPLO
    int x = 5;
    printf("Antes da funcao: x = %d\n", x);//5
    soma_mais_um(x);
    printf("Depois da funcao: x = %d\n", x);//5 (TUDO O QUE FOI FEITO DENTRO DA FUNCAO, Eh PERDIDO)


return 0;
}
