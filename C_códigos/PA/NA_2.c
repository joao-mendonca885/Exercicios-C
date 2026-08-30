#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int par(int v[], int len){
    if (len==1) {
        if (v[0] % 2 == 0) return v[0];
        else return -1;
    }
    int maiorPar;
    maiorPar = par(v, len-1);
    if (maiorPar % 2 == 0){
        if(v[len-1] % 2 == 0){
            if(maiorPar > v[len-1]) return v[len-1];
            else return maiorPar;
        }
        else return maiorPar;
    }
    else{
        if(v[len-1] % 2 == 0) return v[len-1];
        else return -1;
    }
}

int main(){
    srand(time(NULL));
    int v[10];
    for (int i=0; i<10; i++){
        v[i] = rand()%10;
        printf("%d ", v[i]);
    }
    printf("\n");
    printf("%d", par(v, 10));
    return 0;
}