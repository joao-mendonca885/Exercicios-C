#include <stdio.h>

int numDigitos(char s[]){
    int i;
    int n = 0;
    for (i=0; s[i] != '\0'; i++){
        if (s[i] >= '0' && s[i] <= '9'){
            n++;
        }
    }
    return n;
}

int main(){
    char s[100];
    printf("Digite sua string: ");
    scanf(" %99[^\n]", s);
    printf("%d", numDigitos(s));
}