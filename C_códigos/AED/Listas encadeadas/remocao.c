#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int conteudo; // conteudo
    celula *seg; // aponta para o próximo
}celula;

/*Recebe o endereço p de uma célula em uma lista
e remove da lista a célula p->seg.
Supõe que p != NULL e p->seg != NULL.*/
void remocao(celula *p){
    celula *lixo;
    if (p->seg->seg != NULL){
        lixo = p->seg;
        p->seg = p->seg->seg; // ou lixo->seg
        free(lixo);
    }
    else{
        free(p->seg); // libera a célula que será removida
        p->seg = NULL; // faz p->seg apontar para NULL, pois não há mais célula sucessora
    }
}