///FUNCAO RECURSIVA QUE CALCULA O SOMATORIO DE 1 A N
/*
    Soma(4) = 1 + 2 + 3 + 4
    Soma(3) = 1 + 2 + 3
    Soma(2) = 1 + 2
    Soma(1) = 1

GENERALIZANDO:

    Soma(4) = 4 + Soma(3)
    Soma(3) = 3 + Soma(2)
    Soma(2) = 2 + Soma(1)
    Soma(1) = 1 + Soma(0)
*/
//EM C:
int Soma(int n){
    if (n == 0){
        return 0;
    }else{
        return n + Soma(n-1);
    }
}
