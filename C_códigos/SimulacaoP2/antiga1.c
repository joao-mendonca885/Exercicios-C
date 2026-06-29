#include <stdio.h>

int fat(int n){
    int fatorial = 1;
    for (int i=2; i<=n; i++){
        fatorial = fatorial * i;
    }
    return fatorial;
}


int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    fat(n);
    return 0;
}