/*Mínimo. Escreva uma função que encontre uma célula de conteúdo mínimo.
Faça duas versões: uma iterativa e uma recursiva.*/
#include <stdio.h>

typedef struct{
    int conteudo;
    celula *seg;
}celula;


int iterativa(celula *lista){
    if (lista == NULL) return 0; // Lista vazia
    int minimo = lista->conteudo;
    celula *p;
    p = lista;
    while (p != NULL){
        if (p->conteudo < minimo) minimo = p->conteudo;
        p = p->seg;
    }
    return minimo;
}

int recursiva(celula *lista){
    if (lista == NULL) return 0; // Lista vazia
    else if (lista->seg == NULL) return lista->conteudo; // Última célula
    else{
        int minimo = recursiva(lista->seg); // retorna o menor conteudo
        if (minimo > lista->conteudo) return lista->conteudo;
        else return minimo;
    }
}