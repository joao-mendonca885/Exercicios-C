#include <stdio.h>
#include <stdlib.h>


int separacao(int v[], int inicio, int fim, int pivo){
    int idx_pivo = inicio; int i; int temp;
    for (i = inicio; i < fim; i++){
        if (v[i] <= pivo){
            temp = v[idx_pivo];
            v[idx_pivo] = v[i];
            v[i] = temp;
            idx_pivo++; 
        }
    }
    temp = v[fim]; v[fim] = v[idx_pivo]; v[idx_pivo] = temp;
    return idx_pivo;
}


void quicksort(int v[], int inicio, int fim){
    if (inicio < fim){
        int pivo = v[fim];
        int idx_pivo = separacao(v, inicio, fim, pivo);
        quicksort(v, inicio, idx_pivo - 1);
        quicksort(v, idx_pivo + 1, fim);
    }
}



int main(){
    int len;
    scanf("%d", &len);
    int *v = (int *) malloc(len * sizeof(int));
    for (int i=0; i<len; i++){
        scanf("%d", &v[i]);
    }
    quicksort(v, 0, len-1);
    for (int i=0; i<len; i++){
        printf("%d ", v[i]);
    }
    free(v);
    return 0;
}