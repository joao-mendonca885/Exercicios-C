#include <stdio.h>

typedef struct {
    int conteudo; // conteudo
    celula *seg; // aponta para o próximo
}celula;


// considerando que é uma lista com cabeça

celula *busca(int valor, celula *lista){
    celula *p;
    p = lista->seg;
    while (p != NULL && p->conteudo != valor){
        p = p->seg;
    }
    return p;
}
/* Esta função recebe um inteiro valor e uma lista encadeada lista* 
com cabeça. Devolve o endereço de uma célula que contém x
* ou devolve NULL se tal célula não existe. */

// lista sem cabeça
celula *buscaS(int valor, celula *lista){
    celula *p;
    p = lista;
    while (p != NULL && p->conteudo != valor){
        p = p->seg;
    }
    return p;
}
/* Esta função recebe um inteiro valor e uma lista encadeada lista* 
sem cabeça. Devolve o endereço de uma célula que contém x
* ou devolve NULL se tal célula não existe. */
