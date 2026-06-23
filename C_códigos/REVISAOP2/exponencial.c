#include <stdio.h>


int exponencial(int k){
    int resultado;
    if (k == 0) return 1;
    if (k == 1) return 2;
    else return 2 * exponencial(k-1); 
}



int main(){
   int k;
   printf("Digite o valor de k: ");
   scanf("%d", &k);
   int i = 0;
   printf("2^%d = %d",k , exponencial(k)); 
}