#include <stdio.h>

int numerosn(int n, int soma){
    if (n==0) return soma;
    else return numerosn(n-1, soma+n); 
}



int main(){
    int soma;
    soma = numerosn(15, 0);
    printf("%d", soma);
}