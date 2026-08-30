#include <stdio.h>

int traco(M[MAX][MAX], int dim){
    int soma = 0;
    for (int i = 0; i<MAX; i++){
        for (int j=0; j<MAX; j++){
            if (j==i) soma = soma + M[i][j];
        }
    }
    return soma;
}