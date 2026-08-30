#include <stdio.h>



int recursiva(int v[5], int len){
    if (len == 0) return 1;
    if (v[len-1] % 3 == 0 && v[len-1] % 7 == 0){
        return v[len-1] * recursiva(v, len-1);   
    }
    else return recursiva(v, len-1);
}
int iterativa(int v[5], int len){
    int mult = 1;
    for (int i=0; i<len; i++){
        if (v[i] % 3 == 0 && v[len-1] % 7 == 0){
            mult = mult * v[i];
        }
    }
    return mult;
}


int main(){
    int v[] = {9, 7, 5, 21, 84};
    int len = 5;
    printf("%d", recursiva(v, len));
    return 0;
}