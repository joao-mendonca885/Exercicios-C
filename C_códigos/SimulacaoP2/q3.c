#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ordenacao(int v[], int n){
    if (n<=1) return 1;
    if (v[0] < v[1]) return 0;
    return ordenacao(v+1, n-1); //desloca 1 posição do vetor
}




int main(){
    int v[3];
    for (int i=0; i<3; i++){
        scanf("%d", &v[i]);
    }
    printf("\n%d", ordenacao(v, 3));
}