#include <stdlib.h>
#include <stdio.h>
typedef struct {
    int conteudo; // conteudo
    celula *seg; // aponta para o próximo
}celula;    

/* A função insere uma nova célula em uma lista encadeada
* entre a célula p e a seguinte (supõe-se que p != NULL).
* A nova célula terá conteúdo y. */

void insercao(int y, celula *p){
    celula *nova;
    nova = (celula *) malloc(sizeof(celula));
    nova->seg = p->seg; // celula nova aponta para a seguinte
    p->seg = nova; // celula atual aponta para a nova
    nova->conteudo = y; // atribui o conteúdo à nova célula

}