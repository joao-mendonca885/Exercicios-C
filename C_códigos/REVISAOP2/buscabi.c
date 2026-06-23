#include <stdio.h>


int buscaBinaria(int v[], int alvo, int inicio, int fim){
    if (inicio > fim) return -1;
    int meio = (inicio+fim)/2;
    if (v[meio] == alvo) return meio;
    if (v[meio] < alvo) return buscaBinaria(v, alvo, meio+1, fim);
    if (v[meio] > alvo) return buscaBinaria(v, alvo, inicio, meio-1);
}


int main(){
    int v[10] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int alvo;
    scanf("%d", &alvo);
    printf("Índice: %d", buscaBinaria(v, alvo, 0, 9));
}