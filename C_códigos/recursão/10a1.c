#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int Numeros10a1(int a[], int i){
    printf("%d", a[i]);
    if (i==0) return a[i];
    else return Numeros10a1(a, i-1);
}

int numeros1a10(int a[], int i){
    printf("%d", a[i]);
    if (i==9) return a[i];
    else return numeros1a10(a, i+1);
}
                               


int main(){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Numeros10a1(a, 9);
    numeros1a10(a, 0);
    return 0;
}