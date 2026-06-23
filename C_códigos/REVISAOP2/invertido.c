#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void vetorinvertido(int v[], int n){
    if (n == 0) return;
    printf("%d ", v[n-1]);
    vetorinvertido(v, n-1);
}




int main(){
    srand(time(0));
    int v[10];
    for (int i = 0; i<10; i++){
        v[i] = rand() % 10;
        printf("%d ", v[i]); 
    }
    printf("\n\n");
    vetorinvertido(v, 10);
}