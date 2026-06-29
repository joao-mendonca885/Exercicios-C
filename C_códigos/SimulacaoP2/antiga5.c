#include <stdio.h>

int eh_primo(int n, int divisor){
    if (n<=1) return 0;
    if (divisor==1) return 1;
    else{
        if (n % divisor == 0) return 0;
        else return eh_primo(n, divisor-1);
    }
}


int main(){
    int n;
    scanf("%d", &n);
    int divisor = n/2;
    printf("%d", eh_primo(n, divisor));
}