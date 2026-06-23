#include <stdio.h>


int pot(int a, int b, int temp){
    if (b==0) return 1;
    if (b==1) return a;
    return pot(a*temp, b-1, temp);
}


int main(){
    int base, expoente;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &expoente);
    int temp = base;
    printf("\n%d", pot(base, expoente, temp));
}