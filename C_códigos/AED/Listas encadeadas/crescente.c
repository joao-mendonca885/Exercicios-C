#include <stdio.h>
typedef struct {
    int conteudo; // conteudo
    celula *seg; // aponta para o próximo
}celula;

int eh_crescente_recursiva_sem_cabeca(celula *lista){
    if (lista == NULL) return 0; // lista vazia
    else{
        if (lista->seg == NULL) return 1; // deu certo                
        else if (lista->conteudo > lista->seg->conteudo) return 0; // falhou
        return eh_crescente_recursiva_sem_cabeca(lista->seg);
    }
}

int eh_crescente_iterativa_sem_cabeca(celula *lista){
    if (lista == NULL) return 0; //lista vazia
    celula *p;
    for (p = lista; p->seg != NULL; p = p->seg){
        if (p->conteudo > p->seg->conteudo) return 0;
    }
    return 1;
}

int eh_crescente_recursiva_com_cabeca(celula *lista){
    if (lista->seg == NULL) return 0; // lista vazia
    else{
        if (lista->seg->seg == NULL) return 1; // deu certo                
        else if (lista->seg->conteudo > lista->seg->seg->conteudo) return 0; // falhou
        return eh_crescente_recursiva_com_cabeca(lista->seg);
    }
}

int eh_crescente_iterativa_com_cabeca(celula *lista){
    if (lista->seg == NULL) return 0; //lista vazia
    celula *p;
    for (p = lista->seg; p->seg != NULL; p = p->seg){
        if (p->conteudo > p->seg->conteudo) return 0;
    }
    return 1;
}