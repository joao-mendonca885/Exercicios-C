#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int somaImpar(int v[], int len){
    if (len == 0) return 0;
    if (v[len-1] % 2 != 0) return v[len-1] + somaImpar(v, len-1);
    else return somaImpar(v, len-1); 
}



int main(){
    srand(time(0));
    int v[10];
    int len = 10;
    for(int i=0;i<10;i++){
        v[i] = rand() %10;
        printf("%d ", v[i]);
    }
    printf("\nSoma: %d", somaImpar(v, len));
    return 0;
}