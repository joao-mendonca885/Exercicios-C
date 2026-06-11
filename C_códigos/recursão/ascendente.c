#include <stdio.h>



int crescente(int a[], int n, int *eh_crescente){
    if (n == 0) return a[n];
    int maiorDosPrimeiros;
    maiorDosPrimeiros = crescente(a, n-1, eh_crescente);
    if (maiorDosPrimeiros < a[n+1]) return a[n+1];
    else{
        *eh_crescente = 0;
        return a[n+1];
    }
}



int main(){
    int n;
    printf("Digite o valor de n(2 até 10): ");
    scanf("%d", &n);
    int eh_crescente = 1;
    int a[10] = {0, 2, 5, 7, 2 , 1, 7, 8, 3, 9};
    crescente(a, n-1, &eh_crescente);
    if (eh_crescente) printf("É crescente");
    else printf("Não é crescente");
    return 0;
}