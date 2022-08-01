/*
A LINGUAGEM C NOS PERMITE CRIAR NOSSOS PROPRIOS TIPOS DE VARIVEIS
ALEM DA 'STRUCT' E DA 'UNION', PODEMOS CRIAR UMA "ENUM"
TBM CHAMADA DE "ENUMERACAO"
*/
#include<stdio.h>
#include<stdlib.h>

//DEFININDO UMA ENUMERACAO
enum semana{Dom, Seg, Ter, Qua, Qui, Sex, Sab};

int main(){
    /*UMA ENUMERACAO PODE SER VISTA COMO UMA LISTA DE CONSTANTES,
    ONDE CADA CONSTANTE POSSUI UM NOME SIGNIFICATIVO*/

    //DECLARACAO DE UMA VARIAVEL ENUM
    enum semana s;

    //ATRIBUINDO UM VALOR A VARIAVEL
    s = Seg;//1 //Seg NAO Eh UMA PALAVRA, E SIM UM IDENTIFICADOR ASSOCIADO A SEQUENCIA NUMERICA
    printf("Valor = %d\n", s);

    enum semana s1, s2, s3;
    s1 = Seg;//FAZENDO ATRIBUICOES
    s2 = Ter;//FAZENDO ATRIBUICOES
    s3 = s1 + s2; //FAZENDO OPERACOES
    printf("Domingo = %d\n", Dom);//IMPRIMINDO DIRETAMENTE
    printf("s1 = %d\n", s1);
    printf("s2 = %d\n", s2);
    printf("s3 = %d\n", s3);
    if (s3 == Qua){//FAZENDO COMPARACAO
        printf("s3 igual a Quarta\n");
    }


return 0;
}

enum semana{Dom=1, Seg, Ter, Qua=7, Qui, Sex, Sab};
int main(){
    printf("Domingo = %d\n", Dom);//1
    printf("Segunda = %d\n", Seg);//2
    printf("Terca = %d\n", Ter);//3
    printf("Quarta = %d\n", Qua);//7
    printf("Quinta = %d\n", Qui);//8
    printf("Sexta = %d\n", Sex);//9
    printf("Sabado = %d\n", Sab);//10
return 0;
}

//PODE-SE ATRIBUIR VALORES DA TABELA ASCII PARA ENUMERACAO
//enum escapes{retrocesso='\b', tabulacao='\t', novalinha='\n'};
int main(){
    enum escapes e = novalinha;
    printf("Teste %c de %c escrita\n", e, e);
    e = tabulacao;
    printf("Teste %c de %c escrita\n", e, e);

return 0;
}
