#include <stdio.h>
typedef struct celula{
    int conteudo;
    struct celula *seg;
}celula;
//Escreva uma função recursiva que imprime uma lista encadeada sem cabeça de trás para frente

typedef struct pilha{
    celula *topo;
}pilha;

void imprimir_lista(celula *lst){
    if (lst == NULL) return; // caso base: fim da lista
    imprimir_lista(lst->seg); // Chamada recursiva
    printf("%d ", lst->conteudo); // 
}



int primeiro_maior_ou_igual(int v[], int inicio, int fim, int alvo){
    while (inicio <= fim){
        int meio = (inicio + fim)/2;
        if (v[meio] == alvo){
            while (meio > 0 && v[meio-1] == alvo){
                meio--;
            }
            return meio;
        }
        if (inicio == fim){
            if (v[meio] < alvo) return meio;
            else if (v[meio] > alvo) return meio +1;
        }
        else if (v[meio] < alvo) inicio = meio + 1;
        else if (v[meio] > alvo) fim = meio - 1;
    }
}

void empilhar(pilha *p, int valor){
    celula *nova = (celula *) malloc(sizeof(celula));
    if (nova == NULL) return;
    nova->conteudo = valor;
    nova->seg = p->topo;
    p->topo = nova;
}

int buscaEremove(celula *cabeca){
    if (cabeca->seg == NULL) return -1;
    celula *atual = cabeca->seg;
    if (atual->seg != NULL)
    while (atual->seg != NULL)  
}

int main (){
    int n;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i<n; i++){
        scanf(" %d", &v[i]);
    }
    printf("%d\n", primeiro_maior_ou_igual(v, 0, n-1, 4));

    int linhas;
    int colunas;
    int **matriz = (int **) malloc(sizeof(int *));
    for (int i = 0; i<n; i++){
        matriz[i] = malloc(colunas * sizeof(int))
    }
    pilha *p = (pilha *) malloc(sizeof(pilha));
    p->topo = NULL;
}