#include <stdio.h>
#include <stdlib.h>


void intercala(int v[], int inicio, int meio, int fim){
    int *w = (int *) malloc((fim-inicio) * sizeof(int));

    int len_w = 0; int v_meio = meio; int v_inicio = inicio;
    
    while (inicio <= v_meio && meio+1 <= fim){
        if (v[inicio] <= v[meio+1]) w[len_w++] = v[inicio++];
        else {w[len_w++] = v[meio+1]; meio++;}
    }
    
    while (inicio <= v_meio) w[len_w++] = v[inicio++];
    
    while (meio+1 <= fim){ w[len_w++] = v[meio+1]; meio++;}
             
    for (int i = v_inicio; i<=fim; i++) v[i] = w[i-v_inicio];  
}

// simulando com o vetor v = [3, 5, 1, 6, 4, 7, 9, 0]
// inicio = 0
// fim = 7
void mergesort(int v[], int inicio, int fim){
    if (inicio < fim){ // enquanto tiver mais de um elemento        
        int meio = (inicio+fim)/2;
        mergesort(v, inicio, meio); // v[3, 5, 1, 6]
        mergesort(v, meio+1, fim); // v[4, 7, 9, 0]
        // junta os dois ordenados
        intercala(v, inicio, meio, fim); // v[1, 3, 5, 6] + v[0, 4, 7, 9] 
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int *v = (int *) malloc(n * sizeof(int));
    for (int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    mergesort(v, 0, n-1);
    for (int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}