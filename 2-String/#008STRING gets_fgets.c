// GETS() x FGETS()

#include<stdio.h>
#include<string.h>

int main(){
    char senha[10];
    int flag = 0;

    printf("Digite a senha: ");
    //gets(senha); - SE A ENTRADA FOR MAIOR QUE A QUANTIDADE DE CARACTERES DA SENHA, A FLAG É INVADIDA E O VALOR PASSA A NÃO SER MAIS 0
    //PARA CORRIGIR ISSO USAMOS:
    fgets(senha,10,stdin); //SINTAXE (VARIAVEL, QUANTIDADECARACTERES, DE ONDE A LEITURA Eh 'STDIN'(teclado))

    if(strcmp(senha, "1234") == 0){
        flag = 1;
    }
    if(flag){
        printf("Acesso APROVADO\n");
    }else{
        printf("Acesso NEGADO\n");
    }
return 0;
}
