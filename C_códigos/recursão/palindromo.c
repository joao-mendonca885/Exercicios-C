#include <stdio.h>
#include <string.h>

void verificacao(char s[], int n, int len, int *palindromo){
    if (n == len) return;
    char primeiroElemento =  s[n];
    char ultimoElemento = s[len];
    if (primeiroElemento == ultimoElemento) verificacao(s, n+1, len-1, palindromo);
    else{
        *palindromo = 0;
        return;
    }
}

int main(){
    char s[100];
    printf("Digite a string: ");
    scanf(" %99[^\n]", s);
    int palindromo = 1;
    verificacao(s, 0, strlen(s)-1, &palindromo);
    if (palindromo) printf("É um palíndromo");
    else printf("Não é um palíndromo");
}