#include <stdio.h>


    
int fat(int n){
    if (n==1) return 1;
    else return n *fat(n-1);
}

void valores(int i, int n){
    for (int j=i; j<=n; j++){
        printf("%d ", fat(j));
    }
}

int main(){
    printf("Digite o valor de n: ");
    int n;
    scanf("%d", &n);
    valores(1,n);
}