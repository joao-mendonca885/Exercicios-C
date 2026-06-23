#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int soma(int v[], int n){
    if (n == 0) return v[0];
    else return soma(v, n-1) + v[n];
}


int main(){
    srand(time(0));
    int v[10];
    for (int i=0; i<10; i++){
        v[i] = rand() % 10;
        printf("%d ", v[i]);
    }
    int n = sizeof(v)/sizeof(v[0]);
    printf("\n%d",soma(v, n-1));
}