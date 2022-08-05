#include <stdio.h>
#include <stdlib.h>

int main(){
    ///Exemplo:
    //PONTEIRO DO TIPO FILE
    FILE *f; //ponteiro para arquivo

    /*'fopen()': FUNCAO PARA ABRIR O ARQUIVO EM MODO DE LEITURA OU ESCRITA*/
    ///Forma geral:
    FILE *fopen(char *nome, char *modo)

    f = fopen("arquivo.txt", "w"); //VARIAVEL RECEBE ARQUIVO EM MODO DE ESCRITA(w)

    //FUNCAO 'fopen()' RETORNA NULL CASO DE ERRO PARA ABRIR UM ARQUIVO
    if (f == NULL){ //SEMPRE VERIFICAR ABERTURA DO ARQUIVO
        printf("Erro na abertura!\n");
        exit(1);//ABORTA O PROGRAMA
    }

return 0;
}

int main(){
    /*MODO DE ABERTURA DETERMINA QUE TIPO DE USO SERA FEITO DO ARQUIVO*/
    FILE *f
    //LEITURA DE ARQUIVO TEXTO
    f = fopen("arquivo.txt", "r");

    //ESCRITA DE ARQUIVO TEXTO
    f = fopen("arquivo.txt", "w");

    //LEIRUTA DE ARQUIVO BINARIO
    f = fopen("arquivo.txt", "rb");

    //ESCRITA DE ARQUIVO BINARIO
    f = fopen("arquivo.txt", "wb");

return 0;
}

int main(){
    /*'fclose': FUNCAO PARA FECHAR O ARQUIVO (SEMPRE USAR)*/
    ///Forma Geral:
    int fclose(FILE *f);

    /*fclose RETORNA ZERO NO CASO DE SUCESSO NO FECHAMENTO DO ARQUIVO*/

return 0;
}

int main(){
    ///CODIGO COMPLETO
    f = fopen("arquivo.txt", "w");
    if (f == NULL){
        printf("Erro na abertura!\n");
        exit(1);
    }

    fclose(f);

return 0;
}
