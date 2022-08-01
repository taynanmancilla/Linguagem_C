/*
IDEIA BASICA DA RECURSAO Eh DIVIDIR E CONQUISTAR:
    - Problema maior -> problemas menores
    - Solucionar problemas menores
    - Combinar solucoes
*/
/*
FORMA DE EXECUÇÃO:
    O PROGRAMA VAI EMPILHANDO AS CHAMADAS DAS FUNCOES
    E DEPOIS DESEMPILHANDO OS RESULTADOS
*/

///

/*

CUIDADOS:
    DURANTE A IMPLEMENTAÇÃO DE UMA FUNÇÃO RECURSIVA TEMOS QUE TER EM MENTE DUAS COISAS:
    - CRITERIOS DE PARADA
        Determina quando a funcao deve parar de chamar a si mesma
    - PARAMETROS DA CHAMADA RECURSIVA
        Devemos sempre mudar o valor do parametro passado, de forma que a recursao chegue a um termino 
*/
//EXEMPLO DO CALCULO DE FATORIAL
int fatorial(int n){
    if (n == 0){
        return 1; //CRITERIO DE PARADA
    }else{
        return n*fatorial(n-1); //PARAMETRO DA CHAMADA RECURSIVA
    }
}

///

/*
ALGORITMOS RECURSIVOS TENDEM A NECESSITAR DE MAIS TEMPO E/OU ESPAÇO DO QUE ALGORITMOS ITERATIVOS
Exemplo: SEQUENCIA DE FIBONACCI
    0,1,1,2,3,5,8,13,21,34,55,89,...
*/
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }else{
        return fibo(n-1) + fibo(n-2); //DUAS CHAMADAS RECURSIVAS
    }
}
///NAO FAZEMOS ESSE CALCULO DE FIBO COM FUNCAO RECURSIVA POIS GERA UM EXCESSO DE CALCULO REPETIDO
