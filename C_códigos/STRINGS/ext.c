#include <stdio.h>
int soma(int n[], int tam){
    if (tam<1) return 0;
    if (tam == 1) return n[tam-1];
    if (n[tam-1] > 0) return n[tam-1] + soma(n, tam-1);
    else return soma(n, tam-1);
}

int mdc (int a, int b, int temp){
    if(temp % a == 0 && temp % b == 0) return temp;
    else return mdc(a, b, temp -1);
}


int iterativa(int x){
    if (x <= 3) return x;
    int f1 = 1; 
    int f2 = 2;
    int f3 = 3; 
    int f4;
    for (int i=4; i<= x; i++){
        f4 = f1 + f2 + f3;
        f1 = f2;
        f2 = f3;
        f3 = f4;
    }
    return f4;
}




int menor(int v[], int tam){
    if (tam<1) return 0;
    if (tam == 1) return v[tam-1];
    int menor_elemento = menor(v, tam-1);
    if (v[tam-1] > menor_elemento) return menor_elemento;
    else return v[tam-1];
}




int main(){
    int a, b;
    int temp;
    if (a>b) temp = b;
    else temp = a;
    printf("%d", mdc(a, b, temp));
    return 0;
}