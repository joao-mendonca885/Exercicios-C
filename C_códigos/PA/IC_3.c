#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fibonacci(int n){
    if (n==0) return 1;
    if (n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2) + 1; 
}





int main(){
    srand(time(0));
    int n;
    int cont = 1;
    n = rand() % 10;
    printf("%d\n", n);
    printf("número de chamadas: %d", fibonacci(n));
}