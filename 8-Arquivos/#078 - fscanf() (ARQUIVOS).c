#include <stdio.h>
#include <stdlib.h>

/*int main(){
    //'fscanf()': FUNÇÃO PARA LER UMA LISTA FORMATADA DO ARQUIVO
    ///Forma Geral scanf():
    scanf("tipos de entrada", variaveis);

    ///Forma Geral fscanf():
    fscanf(FILE *f, "tipos de entrada", variaveis);

return 0;
}*/

int main(){
    FILE *f = fopen("arquivo.txt", "r"); //ABRINDO ARQUIVO PRA LEITURA
    if(f == NULL){
        printf("Erro de Abertura!\n");
        exit(1);
    }
    char texto[20], nome[20];
    int id;
    float h;

    //FAZENDO LEITURA NO FORMATO DO TEXTO:
    fscanf(f, "%s %s", texto, nome); //NÃO USO '&' NOS DOIS POIS SÃO VETORES
    printf("%s %s\n", texto, nome);

    fscanf(f, "%s %d", texto, &id);
    printf("%s %d\n", texto, id);

    fscanf(f, "%s %f", texto, &h);
    printf("%s %.2f\n", texto, h);

    fclose(f);

return 0;
}
