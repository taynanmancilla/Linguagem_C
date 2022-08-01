/*COMANDO SWITCH PERMITE FAZER SELEÇÕES MULTIPLAS COM BASE NO VALOR DE UMA VARIÁVEL
DO TIPO int ou char*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int valor;
    printf("Digite um numero: ");
    scanf("%d", &valor);

    switch(valor){
        //POSSIVEIS VALORES Q A 'VARIAVEL' PODE TER
        case 1: printf("Digitou o numero 1!!"); break; //*COMANDO 'BREAK' Eh PRA SAIR DO SWITCH
        case 2: printf("Digitou o numero 2!!"); break;//PARA NAO EXECUTAR O CASE SEGUINTE*/
        case 3: printf("Digitou o numero 3!!"); break;
        //CASO A VARIAVEL NAO TENHA NENHUM DESSES VALORES EXECUTA:
        default: printf("Digite um numero entre 1 e 3, please!!");
    }
return 0;
}
