// implementação de fila em vetores
# include <stdio.h>
#define MAX 100
int fila[MAX];
int inicio = 0;
int fim = 0;

int remocao(int fila[], int *inicio, int *fim){
    if (*inicio == *fim){
        printf("Fila vazia\n");
        return -1; // fila vazia
    }
    int valor = fila[*inicio];
    *inicio = (*inicio + 1) % MAX;
    return valor;
}