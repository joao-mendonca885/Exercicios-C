#include <stdio.h>


int mdc(int a, int b, int n){
    if (a % n == 0 && b % n == 0) return n;
    else return mdc(a, b, n-1); 
}


int main(){
    int a, b;
    printf("Digite os valores de a e b: ");
    scanf("%d %d", &a, &b);
    int n;
    if (a>b) n = b;
    else n = a;
    printf("MDC: %d", mdc(a, b, n));
    return 0;
}