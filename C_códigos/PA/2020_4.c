#include <stdio.h>
#define max 3
#include <time.h>
#include <stdlib.h>


void matriz(int M[max][max]){
    int i, j;
    int soma=0;
    for (i=0; i<max; i++){
        for (j=0; j<max; j++){
            if (i == max-j-1){
                if (M[i][j] % 2 == 0){
                    soma = soma + M[i][j];
                }
            }
        }
    }
    printf("\nSoma: %d", soma);
}



int main(){
    srand(time(0));
    int M[max][max];
    for (int i=0; i<max; i++){
        for (int j = 0; j<max; j++){
            M[i][j] = rand() % 10;
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    matriz(M);
    return 0;
}