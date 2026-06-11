#include <stdio.h>

int mult(int a, int b, int temp){
    if (a==1) return b;
    if (a==0) return 0;
    if (b==0) return 0;
    if (b==1) return a;
    return mult(temp + a, b-1, temp);
}


int main(){
    int a, b;
    printf("Digite os valores de a e b, respectivamente: ");
    scanf("%d %d", &a, &b);
    int temp = a;
    printf("%d", mult(a, b, temp));
}