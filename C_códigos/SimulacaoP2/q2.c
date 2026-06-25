#include <stdio.h>

int divisao(int a, int b, int temp){
    if (b>a) return 0;
    return 1 + divisao(a-temp, b, temp);
}


int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int temp = b;
    printf("%d", divisao(a, b, temp));
}