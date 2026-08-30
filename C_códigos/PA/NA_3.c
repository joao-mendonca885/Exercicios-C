#include <stdio.h>
#include <string.h>

int binToDec(char s[], int cont, int len){
    if (len < 0) return 0;
    if (s[len] == '1') return cont * 1 + binToDec(s, cont*2, len-1);
    if (s[len] == '0') return cont * 0 + binToDec(s, cont*2, len-1);
}


int main(){
    char s[] = "10";
    int cont = 1;
    int len = strlen(s)-1;
    printf("%d", binToDec(s, cont, len));
    return 0;
}