#include <stdio.h>
#include <string.h>
int palindromo(char s[], int inicio, int fim){
    if (inicio >= fim-1) return 1;
    if (s[inicio] != s[fim-1]) return 0;
    palindromo(s, inicio+1, fim-1);
}



int main(){
    char s[100];
    scanf(" %99[^\n]", s);
    int fim = strlen(s);
    int inicio = 0;
    printf("%d", palindromo(s, inicio, fim));
    return 0;
}