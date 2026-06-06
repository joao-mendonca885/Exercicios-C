#include <stdio.h>

char *concatenacao(char s[], char n[]){
    int i, j;
    for (i=0; s[i]!= '\0'; i++);
    for (j=0; n[j] != '\0'; j++ && i++){
        s[i] = n[j];
    }
    s[i] = '\0';
    return s;
}

int main(){
    char s[100] = "Olá, ";
    char n[] = "mundo!";
    printf("%s", concatenacao(s, n));
}