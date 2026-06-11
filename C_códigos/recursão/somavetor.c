#include <stdio.h>



int soma(int a[], int i){
    if (i == 0) return a[i];
    else return a[i] + soma(a, i-1);
}


int main(){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int somai = soma(a, 9);
    printf("%d", somai);
}