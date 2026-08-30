#include <stdio.h>
#include <stdlib.h>


int *Pesquisa_em_largura (int **A, int n, int o) {
    int *d, x, y;
    int *f, s, t;
    d = malloc (n * sizeof (int)); 
    for (x = 0; x < n; x++) d[x] = -1;
    d[o] = 0;
    f = malloc (n * sizeof (int));
    s = 0; t = 1; f[s] = o;
    while (s < t) {
    /* f[s..t-1] é uma fila de cidades */
        x = f[s++]; // comeca a partir do primeiro elemento da fila
        for (y = 0; y < n; y++)
        // se a distancia entre x e y existe
        // se y ainda nao foi visitado (d[y] == -1)
            if (A[x][y] == 1 && d[y] == -1) { 
                d[y] = d[x] + 1; // distancia de y é distancia de x + 1
                f[t++] = y; // adiciona y na fila(vizinho de x)
        }
    }
    free (f);
    return d;
}