#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int conteudo;
    struct celula *seg;
    struct celula *fim;
    struct celula *inicio;
}celula;

void inserir(celula **inicio, celula **fim, int valor){
    celula *nova = (celula *) malloc(sizeof(celula));
    if (nova == NULL) return;
    nova->conteudo = valor;
    nova->seg = NULL;
    if ((*inicio)->seg == NULL) {
        (*inicio)->seg = nova;
        (*fim) = nova;
    }
    else {
        (*fim)->seg = nova;
    }
    *fim = nova;
}

int remover (celula **fim, celula **inicio){
    if ((*inicio)->seg == NULL) return -1;
    celula *lixo = (*inicio)->seg;
    int x = lixo->conteudo;
    if ((*inicio)->seg == *fim){
        (*inicio)->seg = *fim = NULL;
    }
    else{
        (*inicio)->seg = lixo->seg;
    }
    free (lixo);
    return x;
}

int main(){

}