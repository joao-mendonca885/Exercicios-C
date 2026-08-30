#include <stdio.h>
int eh_decrescente(int v[], int len){
    if (len == 1) return 1;
    if(v[0] > v[1]) return eh_decrescente(v+1, len-1);
    else return 0;
}



int main(){
    int v[5];
    int len = 5;
    for (int i=0; i<5; i++){
        scanf("%d", &v[i]);
    }
    printf("%d", eh_decrescente(v, len));
    return 0;
}