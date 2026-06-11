#include <stdio.h>

int imprimir(int i, int n){
    printf("%d ", i);
    if (n==i) return i;
    else return imprimir(i+1, n);
}
int main(){
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    imprimir(1, n);
}