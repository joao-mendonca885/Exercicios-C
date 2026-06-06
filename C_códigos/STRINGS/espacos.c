#include <stdio.h>
/*Remoção de Espaços: 
Crie um programa que remova todos os espaços de uma string.*/



char *removeSpaces(char s[]){
    int i;
    int y=0;
    static char n[100];
    for (i=0; s[i] != '\0'; i++){
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n'){
            n[y] = s[i];
            y++;
        }
    }
    n[y] = '\0';
    return n;
}

int main(){
    char s[100];
    printf("Digite sua string: ");
    scanf(" %99[^\n]", s);
    printf("String without spaces: %s", removeSpaces(s));
}