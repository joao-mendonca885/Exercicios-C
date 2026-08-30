#include <stdio.h>

typedef struct {
    int conteudo; // conteudo
    celula *seg; // aponta para o próximo
}celula;

// celula com cabeça
void imprimir(celula *lst){
    celula *p;
     /*como é lista com cabeça,
    a primeira célula não contém conteúdo, 
    então p aponta para a segunda célula */
    for (p = lst->seg; p != NULL; p = p->seg){
        printf("%d ", p->conteudo); 
    }
}


// considerando que é uma lista com cabeça