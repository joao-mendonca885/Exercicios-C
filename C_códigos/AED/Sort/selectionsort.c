#include <stdio.h>
#include <stdlib.h>

void selectionsort(int v[], int n){
    int i, j, menor;
    for (j=0; j<n; j++){
        menor = v[i];       
        for (i=j; i<n; i++){
            if (v[i] < menor) menor = v[i];
        }
        int temp = v[j];
        v[j] = menor;
        menor = temp;
    }
}   


int main(){

    return 0;
}