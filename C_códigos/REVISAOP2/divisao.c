#include <stdio.h>


int divisao(int a, int b, int temp){
    if (a==b) return 1;
    if (a < b) return 0;
    return 1 + divisao(a-temp, b, temp);
}


int main(){
    int a, b;
    printf("Digite os valores de a e b, respectivamente: ");
    scanf("%d %d", &a, &b);
    int temp = b;
    printf("%d", divisao(a, b, temp));
}