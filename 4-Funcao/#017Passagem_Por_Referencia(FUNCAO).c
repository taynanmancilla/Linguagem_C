/**PASSAGEM POR REFERENCIA: O ENDERECO DE ONDE O DADO ESTA ARMAZENADO NA MEMORIA
Eh PASSADO PARA A FUNCAO**/
//A FUNCAO 'SCANF' Eh UM EXEMPLO DE PASSAGEM POR REFERENCIA
#include<stdio.h>
#include<stdlib.h>

void soma_referencia(int *n){//USA-SE O OPERADOR '*' PARA INDICAR QUE ESTA RECEBENDO O ENDERECO DE 'x'
    *n = *n+1;//USAR O '*' DENTRO DA FUNCAO
    printf("Dentro da funcao: x = %d\n", *n);//6
}
int main(){
    //EXEMPLO
    int x = 5;
    printf("Antes da funcao: x = %d\n", x);//5
    soma_referencia(&x);//USAR O '&' AO CHAMAR A FUNCAO(ASSIM COMO NO 'SCANF')
    printf("Depois da funcao: x = %d\n", x);//6

return 0;
}
