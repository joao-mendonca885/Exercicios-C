#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int soma(int v[], int n) {
    if (n == 0) return 0;          // caso base
    return v[n-1] + soma(v, n-1);  // último + soma dos anteriores
}

float media(int v[], int n) {
    return (float) soma(v, n) / n;
}

int main(){
    srand(time(0));
    int v[10];
    for (int i=0; i<10; i++){
        v[i] = rand() % 10;
        printf("%d ", v[i]);
    }
    int n = sizeof(v)/sizeof(v[0]);
    soma(v, n-1); // calcula a soma para usar na média
    printf("\n%.2f", media(v, n-1));
}
