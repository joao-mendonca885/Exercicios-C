#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int somapos(int v[], int n){
    if (n < 0) return 0;
    if (v[n] > 0) return v[n] + somapos(v, n-1);
    else return somapos(v, n-1);
}



int main(){
    int v[10];
    for (int i = 0; i<10; i++){
        v[i] = rand() % 10 - 5;
        printf("%d ", v[i]);
    }
    printf("\n%d", somapos(v, 9));
}