int buscabinaria(int v[], int inicio, int fim, int alvo){
    int meio;
    while (inicio <= fim){
        meio = (inicio+fim) / 2;
        if (alvo < v[meio]){
            fim = meio - 1;
        }
        else if (alvo > v[meio]){
            inicio = meio + 1;
        }
        else {
            return meio;
        }
    }
    return -1;
}