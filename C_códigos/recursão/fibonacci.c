#include <stdio.h>





int fibonacci(int n){
    if (n==1) return 1;
    if (n==2) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}
void valores(int n){
    for (int i = 1; i<=n; i++){
        printf("%d ", fibonacci(i));
    }
}

int main(){
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    valores(n);
}