#include <stdio.h>
#include <stdlib.h>
// m < 60
// t = m + 60h

// 60H -> horas em minutos
// supondo 3 horas, fica 60 * 3 == 180 minutos

// h aponta para horas
// m aponta para minutos
void hm(int t, int *h, int *m) { 
    *h = t/60;
    *m = t%60;
}


int main(){
    int horas = 1;
    int minutos =2;
    int tempo = 300;
    hm(tempo, &horas, &minutos);
    return 0;
}