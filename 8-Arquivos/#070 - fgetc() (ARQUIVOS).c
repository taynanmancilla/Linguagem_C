#include <stdlib.h>
#include <stdio.h>

/*int main(){
    /*fget(): FUNÇÃO PARA LER UM CARACTERE DE UM ARQUIVO/
    ///Forma Geral:
    int fgetc(FILE *fp);

    /*
    EM CASO DE ERRO RETORNA A CONSTANTE 'EOF'
    EM CASO DE SUCESSO RETORNA O CARACTER LIDO DO ARQUIVO
    /

return 0;
}
*/

/*int main(){
    FILE *f;
    f = fopen("arquivo.txt", "r");
    if (f == NULL){
        printf("Erro de abertura do arquivo!");
        exit(1);
    }
    char c;
    //LENDO O ARQUIVO, UM CARACTERE POR VEZ:
    for(int i=1; i<=10; i++){
        c = fgetc(f);
        printf("%c", c);
    }
    printf("\nFIM\n");
    fclose(f);
return 0;
}*/

int main(){
    FILE *f;
    f = fopen("arquivo.txt", "r");
    if (f == NULL){
        printf("Erro de abertura do arquivo!");
        exit(1);
    }
    char c = fgetc(f); //ATRIBUINDO O PRIMEIRO CARACTERE PRA VARIAVEL
    //LENDO O ARQUIVO COMPLETO, UM CARACTERE POR VEZ ATÉ O FIM:
    while(c != EOF){
        printf("%c", c);
        c = fgetc(f); //ATRIBUINDO O PRÓXIMO CARACTERE ATÉ O 'EOF'
    }
    printf("\nFIM\n");
    fclose(f);
return 0;
}
