#include <stdio.h>

int impares(int i, int n){
    if (i%2 != 0) printf("%d ", i);
    if (i==n) return i;
    else return impares(i+1, n);

}



int main(){
    impares(1, 20);
}