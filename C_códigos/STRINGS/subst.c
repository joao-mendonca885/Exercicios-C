#include <stdio.h>
// Substituição de Caracteres: Crie um programa que substitua todas as ocorrências de um
//caractere em uma string por outro caractere.
#include <string.h>
char *subst(char s[]){
    // usando como referencia o caracter "a"
    int i;
    for (i=0; s[i] != '\0'; i++){
        if (s[i] == 'a') s[i] = 'b';
    }
    return s;
}


int main(){
    char s[100];
    printf("Digite a string 1:");
    scanf(" %99[^\n]", s);
    printf("alteração: %s", subst(s));
}