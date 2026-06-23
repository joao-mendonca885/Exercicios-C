#include <stdio.h>


int somad(int n){
    if (n/10 == 0) return n;
    else return n % 10 + somad(n/10);
}


int main(){
    int num;
    scanf("%d", &num);
    printf("Soma dos dígitos: %d", somad(num));
    return 0;
}