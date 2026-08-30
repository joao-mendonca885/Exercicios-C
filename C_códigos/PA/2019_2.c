#include <stdio.h>
#define MAX 10
// trocar a col1 por col2, ou seja,
// col1 = col2
int troca_colunas(int M[MAX][MAX], int linhas, int colunas, int col1, int col2){
    if (linhas > MAX || colunas > MAX) return 1;

    if (col1 < 0 || col1 >= colunas) return 1;
    if (col2 < 0 || col2 >= colunas) return 1;

    for (int i = 0; i < linhas; i++){
        int temp = M[i][col1];
        M[i][col1] = M[i][col2];
        M[i][col2] = temp;
    }

    return 0;
}


int main(){
    int M[MAX][MAX];
    for (int i=0; i<MAX; i++){
        for (int j=0; j<MAX; j++){
            M[i][j] = rand() % 10;
        }
    }
    int col1, col2;
    scanf("%d %d", &col1, col2);
    troca_colunas(M, MAX, MAX, col1, col2);
    return 0;
}