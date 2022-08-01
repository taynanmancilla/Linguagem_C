#include<stdio.h>
#include<stdlib.h>
//CALCULO DE FATORIAL:
/*
REGRA GENERALIZADA:
    1. 0! = 1
    2. N! = N * (N-1)!
*/
//PARA C:
int fatorial(int n){
    if (n == 0){
        return 1; //1.
    }
    else{
        return n*fatorial(n-1); //2.
    }
}

int main(){
    int x = fatorial(5);

return 0;
}

//EXEMPLO VASO DE FLORES
void esvaziarVaso(int flores){
    if(flores > 0){
        esvaziarVaso(flores-1); //EXECUTA A MESMA FUNÇÃO COM UMA FLOR A MENOS
    }
}
