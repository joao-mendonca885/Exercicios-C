#include <stdio.h>

int qtdnum(int n){
    if (n/10 == 0) return 1;
    else return 1 + qtdnum(n / 10);
}



int main(){
    int num;
    printf("Digite seu número: ");
    scanf("%d", &num);
    printf("Quantidade de dígitos: %d ", qtdnum(num));
}