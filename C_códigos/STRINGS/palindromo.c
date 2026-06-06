#include <stdio.h>


char *palindromo(char s[]){
    int i, j;
    for (i=0; s[i] != '\0'; i++);
    i = i-1;
    for (j=0; s[j] != '\0'; j++, i--){
        if (s[j] != s[i]) return "Não é um palíndromo";
    }
    return "É um palíndromo";     
}

int main(){
    char s[100];
    printf("Digite uma string: ");
    scanf(" %99[^\n]", s);
    printf("%s\n", s);
    printf("%s", palindromo(s)); // retorna palindromo ou não palindromo
    return 0;
}