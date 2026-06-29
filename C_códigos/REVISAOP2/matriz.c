#include <stdio.h>


void preenche_matriz(int m[5][8], int aux){
    if (aux == 40) return;
    int linha = aux / 8; // l
    int coluna = aux % 8;
    m[linha][coluna] = 0;
    preenche_matriz(m, aux + 1);
}


int main(){
    int m[5][8];
    int aux = 0;
    preenche_matriz(m, aux);
    return 0;
}