#include <stdio.h>


int fibonnaci(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    return fibonnaci(n-1) + fibonnaci(n-2);
}

int soma_n(int n){
    if (n==1) return 1;
    else return n + soma_n(n-1);
}


int fat(int n){
    if (n==1) return 1;
    else return n * fat(n-1);
}

int potencia(int base, int expoente){
    if (expoente == 1) return base;
    else return base * potencia(base, expoente - 1);
}


int main(){
    int n;
    n = 4;
    int base = 2;
    printf("%d\n",fibonnaci(n));
    printf("%d\n",soma_n(n));
    printf("%d\n",fat(n));
    printf("%d\n",potencia(n, base));
    return 0;
}