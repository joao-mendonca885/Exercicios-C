#include <stdio.h>


int s1Ins2(char s1[], char s2[]){
    int i, j, k, len;
    int cont=0, Eigual;
    for (i=0; s1[i] != '\0'; i++);
    i = i-1; // tamanho da string s1 -1
    for (j=0; s2[j] != '\0'; j++){
        Eigual = 1;
        if (s2[j] == s1[0]){
            len = j;
            for (k=0; k<=i && s2[len] != '\0'; k++, len++){
                if (s2[len] != s1[k]){
                    Eigual = 0;
                    break;
                }
            }
            if (Eigual && k == i+1) cont++;
        }
    }
    return cont;
}


int ternario(int n, int cont){
    if (n==0) return 0;
    if (n%10 == 2) return 2*cont + ternario(n/10, cont*3);
    if (n%10 == 1) return 1*cont + ternario(n/10, cont*3);
    if (n%10 == 0) return ternario(n/10, cont*3);
}