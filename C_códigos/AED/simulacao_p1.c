#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int conteudo;
    struct lista *prox;
}lista;

typedef struct fila{
    lista *inicio;
    lista *fim;
}fila;
// primeira célula tem conteúdo NULL e aponta para o prox que já tem conteudo
void inserir(lista *l, int valor){
    lista *novo = (lista *) malloc(sizeof(lista));
    if (novo == NULL) return;
    novo->prox = NULL;
    novo->conteudo = valor;
    while (l->prox != NULL) {l = l->prox;}
    l->prox = novo;
}

void insere(fila *f, int valor){
    lista *novo = (lista *) malloc(sizeof(lista));
    if (novo == NULL) return;
    novo->prox = NULL;
    novo->conteudo = valor;
    if (f->fim == NULL){
        f->inicio = novo;
        f->fim = novo;
    }
    else {
        f->fim->prox = novo;
        f->fim = novo;
    }
}

int remove(fila *f){
    if (f->fim == NULL){
        printf("Fila vazia");
        return -1;
    }
    lista *lixo = f->inicio;
    int valor = lixo->conteudo; 
    if (f->fim == f->inicio){
        f->fim = NULL;
        f->inicio = NULL;
    }
    else {
        f->inicio = f->inicio->prox;  
    }
    free(lixo);
    return valor;
}
