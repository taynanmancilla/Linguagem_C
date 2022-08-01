#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

//INICIALIZACAO DE ESTRUTURAS(FORMA MAIS COMPLICADA)

int main(){

        //INICIALIZANDO UMA ESTRUTURA
    struct pessoa p;
        //COPIANDO STRINGS PARA OS CAMPOS DA VARIAVEL 'p' DA STRUCT
    strcpy(p.rua, "Ricardo");
    strcpy(p.rua, "Rua 1");
        //ATRIBUINDO VALORES AOS CAMPOS DO TIPO INTEIRO DA VARIAVEL 'p'
    p.idade = 31;
    p.numero = 101;

return 0;
}

//INICIALIZACAO DE ESTRUTURAS(FORMA MAIS SIMPLES)
int main(){

        //PODEMOS DEFINIR UMA LISTA DE VALORES PARA COLOCAR NA ESTRUTURA(COMO OS ARRAYS)
    struct pessoa p = {"Ricardo", "Rua 1", 31, 101};

        //CAMPOS NAO DEFINIDOS SAO INICIALIZADOS COM ZERO OU COM UMA STRING VAZIA("")
    struct pessoa p = {"Ricardo", "Rua 1", 31};

return 0;
}

//----------------------------------------------------------------------------

//ATRIBUICAO ENTRE ESTRUTURAS(FORMA MAIS COMPLICADA)
int main(){
    struct pessoa p = {"Ricardo", "Rua 1", 31, 101};
    struct pessoa p2;

    //COPIANDO STRINGS DOS CAMPOS DA VARIVAVEL 'p' PARA 'p2'
    strcpy(p2.nome, p.nome);
    strcpy(p2.rua, p.rua);

    //ATRIBUINDO VALORES AOS RESPECTIVOS CAMPOS
    p2.idade = p.idade;
    p2.numero = p.numero;

return 0;
}

//ATRIBUICAO ENTRE ESTRUTURAS(FORMA MAIS SIMPLES)
int main(){
    struct pessoa p = {"Ricardo", "Rua 1", 31, 101};
    struct pessoa p2;

    //ESTRUTURAS SUPORTAM ATRIBUICAO DIRETA DESDE Q SEJA DO MESMO TIPO
    p2 = p;

return 0;
}

//ATRIBUICAO PRECISA SER DE ESTRUTURAS DO MESMO TIPO
struct ponto{
    int x, y;
};
struct new_ponto{
    int x, y;
};
int main(){
    struct ponto p1, p2={1,2};
    struct new_ponto p3={3,4};

    //CORRETO
    p1 = p2;
    printf("P1 = %d e %d\n", p1.x, p1.y);

    //ERRO (TIPOS DIFERENTES)
    //p1 = p3;
    printf("P1 = %d e %d\n", p1.x, p1.y);

return 0;
}
