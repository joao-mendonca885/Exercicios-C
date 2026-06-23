#include <stdio.h>

int menor(int v[], int n){
if (n==1) return v[0];
if (n==0) return 0;
int menortemp;
menortemp = menor(v, n-1);
if (v[n-1] > menortemp) return menortemp;
else return v[n-1];
}


int main(){
    int v[10] = {1, 2, 6, 8, 2,0,7 ,10 ,8, 5};
    int n = sizeof(v)/sizeof(v[0]);
    printf("Menor elemento do vetor: %d", menor(v, n));
    int j, i;
    for (i=0; i<10-1; i++){
        for (j=0; j<10-1-i; j++){
            if (v[j] > v[j+1]){
                int aux = v[j+1];
                v[j+1] = v[j];
                v[j] = aux;
            }
        }
    }
}