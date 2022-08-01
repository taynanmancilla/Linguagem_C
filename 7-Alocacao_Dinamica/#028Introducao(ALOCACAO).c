/*
ARRAYS SÃO AGUPAMENTOS SEQUENCIAIS DE DADOS DE UM MESMO TIPO NA MEMORIA
UM PONTEIRO GUARDA O ENDERECO DE UM DADO NA MEMORIA
O NOME DE UM ARRAY Eh UM PONTEIRO PARA O PRIMEIRO ELEMENTO DO ARRAY

SE O NOME DO ARRAY Eh UM PONTEIRO, PODEMOS FAZER O PROCESSO INVERSO, OU SEJA:
POSSO SOLICITAR UM BLOCO DE MEMORIA E COLOCAR A SUA PRIMEIRA POSICAO EM UM PONTEIRO

A LINGUAGEM C PERMITE ALOCAR(reservar) DINAMICAMENTE(em tempo de execucao) BLOCOS
DE MEMORIAS UTILIZANDO PONTEIROS. A ESSE PROCESSO DAMOS O NOME DE "ALOCACAO DINAMICA"

A LINGUAGEM C USA APENAS 4 FUNCOES PARA ALOCACAO DINAMICA, DISPONIVEIS NA BIBLIOTECA "stdlib.h"
- malloc
- calloc
- realloc
- free

EM CONJUNTO COM O OPERADOR "sizeof"

BASICAMENTE AGORA VAMOS TER UM PONTEIRO Q VAI APONTAR PRA DETERMINADAS POSICOES DE MEMORIA
QUE SERAO CONSIDERADAS COMO UM ARRAY
*/
