#include <stdio.h>

int recursao(int x){
    if (x<=3) return x;
    else return recursao(x-1) + recursao(x-2) + recursao(x-3);
}


int iterativa(int x){
    if (x<=3) return x;
    else{
        int f1 = 1; 
        int f2 = 2;
        int f3 = 3;
        int f4;
        for (int i = 4; i<=x; i++){
           f4 = f1 + f2 + f3;
           f1 = f2;
           f2 = f3;
           f3 = f4;  
        }
        return f4;
    }
}



int main(){
    int x = 7;
    printf("%d", iterativa(x));
    return 0;
}