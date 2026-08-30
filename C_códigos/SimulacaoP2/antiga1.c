#include <stdio.h>

int fat(int n){
    int fatorial = 1;
    for (int i=2; i<=n; i++){
        fatorial = fatorial * i;
    }
    return fatorial;
}
int funcao(int n, int r){
    int c = (fat(n))/(fat(r) * fat(n-r));
    return c;
}

int main(){
    int n, r;
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("Digite um número");
    scanf("%d", &r);
    printf("Combinações: %d",funcao(n, r));
    
    return 0;
}