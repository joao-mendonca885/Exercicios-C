#include <stdio.h>

int verificacao(int n, int v[], int qtd_preenchida){
    int ja_tem = 0;
    if (n > 100 || n < -100) return 0;
    for(int i=0; i<qtd_preenchida; i++){
        if (n == v[i]){
            return 0;
        }
    }
    return 1;
}

void media(int v[]){
    int soma = 0;
    for (int i=0; i<20; i++){
        soma = soma + v[i];
    }
    printf("%f", soma/20.0);
}

void maior_menor(int v[]){
    int maior = v[0];
    int menor = v[0];
    for (int i=0; i<20; i++){
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    printf("%d\n%d", maior, menor);
}

int main(){
    int n;
    int qtd_preenchida = 0;
    int v[20] = {0};
    for (int i =0; i<20; i++, qtd_preenchida++){
        do{
                scanf("%d", &n);
            }while(verificacao(n,v, qtd_preenchida) == 0);
        v[i] = n;
    }
    media(v);
    maior_menor(v);
    return 0;
}