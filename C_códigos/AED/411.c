#include <stdio.h>
// Dizemos que uma célula D é sucessora de uma célula C se C.seg = &D

typedef struct {
    int valor;
    struct celula *seg;
} Celula;

int main() {
    Celula c1, c2;
    c1.valor = 10;
    c2.valor = 20;
    c1.seg = &c2; // c2 é sucessora de c1

    printf("Valor da célula c1: %d\n", c1.valor);
    printf("Valor da célula c2: %d\n", c1.seg->valor); // Acessando o valor da célula sucessora

    return 0;
}