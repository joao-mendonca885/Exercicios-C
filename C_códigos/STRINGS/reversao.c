#include <stdio.h>

// ainda em producao!
char *reversao(char s[]){
    int i;
    static char n[100];
    for (i = 0; s[i] != '\0'; i++){
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'){
            n[i] = 
        }
    }
}



int main(){
    char s[100];
    printf("Digite sua string: ");
    scanf(" %99[^\n]", s);
    printf("String revertida: %s", reversao(s));
}