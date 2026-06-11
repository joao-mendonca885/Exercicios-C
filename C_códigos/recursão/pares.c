#include <stdio.h>


int pares(int i, int n){
    if (i%2 == 0) printf("%d", i);
    if (i==n) return i;
    else return pares(i+1, n);
}


int main(){
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    pares(1, n);
}