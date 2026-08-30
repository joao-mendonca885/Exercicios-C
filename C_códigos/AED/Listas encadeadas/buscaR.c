#include <stdio.h>

typedef struct {
    int conteudo; // conteudo
    celula *seg; // aponta para o próximo
}celula;
// lista com cabeça
celula *buscaR(int valor, celula *lista){
    if (lista->seg == NULL) {
        return NULL; // Lista vazia
    }
    if (lista->seg->conteudo == valor) {
        return lista->seg; // Encontrou o valor
    }
    return buscaR(valor, lista->seg); // Chamada recursiva para o próximo
}
// lista sem cabeça
celula *buscaRS(int valor, celula *lista){
    if (lista == NULL) {
        return NULL; // Lista vazia
    }
    if (lista->conteudo == valor) {
        return lista; // Encontrou o valor
    }
    return buscaRS(valor, lista->seg); // Chamada recursiva para o próximo
}
