#include <stdlib.h>
#include <stdio.h>

/*int main(){
    /*'fgets()': FUNÇÃO PARA LER UMA STRING DE UM ARQUIVO/
    ///Forma Geral:
    char* fgets(char *str, int tamanho, FILE *fp);
    /*ONDE OS 3 PARÂMETROS SÃO:
    *str = ONDE SERA ARMAZENADA A STRING LIDA
    tamanho = QUANTIDADE DE CACTERES LIDA DO ARQUIVO
    FILE *fp = ARQUIVO QUE ESTA SENDO LIDO
    /

    /*
    EM CASO DE ERRO RETORNA NULL
    EM CASO DE SUCESSO RETORNA UM PONTEIRO PARA O PRIMEIRO CARACTERE DE STR
    /


return 0;
}*/

int main(){
    char str[20];
    FILE *arq;
    arq = fopen("arquivo.txt", "r"); //ABRINDO ARQUIVO PARA LEITURA
    if(arq == NULL){
        printf("Erro na abertura!\n");
        exit(1);
    }
    char *result = fgets(str, 12, arq); //LENDO 11 CARACTERES DO ARQUIVO E ARMAZENANDO DENTRO DE 'str'
    if(result == NULL){
        printf("Erro na leitura\n");
    }else{
        printf("%s", str); //IMPRIMINDO A STRING LIDA
    }
    printf("\n");
    fclose(arq);

    /*
    A FUNÇÃO 'fgets()' LÊ UMA STRING ATÉ ENCONTRAR UM CARACTERE DE NOVA LINHA (\n)
    OU 'tamanho-1' CARACTERES, LOGO, SE O TEXTO POSSUIR QUEBRA DE LINHA, SÓ SERÁ
    LIDA A PRIMEIRA LINHA.
    */

return 0;
}
