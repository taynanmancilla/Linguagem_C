#include<stdio.h>
#include<stdlib.h>

int main(){
    /*  MALLOC vs CALLOC 
    AMBAS SERVER PRA ALOCAR MEMORIA, MAS calloc() INICIALIZA TODOS OS BITS
    DO ESPACO ALOCADO COM '0'
    */
   int i;
   int *p, *p1;

   p = (int*)malloc(5*sizeof(int));//RECEBE 1 PARAMETRO
   p1 = (int*)calloc(5, sizeof(int)); //RECEBE 2 PARAMETROS

   printf("calloc \t\t malloc\n");
   for(i=0; i<5; i++){
    printf("p1[%d] = %d\t", i, p1[i]);
    printf(" p[%d] = %d\n", i, p[i]);
   }


return 0;
}