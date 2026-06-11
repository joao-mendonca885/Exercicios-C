#include <stdio.h>
#include <string.h>

void stringEspacada(char s[], int i){
    if (s[i] == '\0') return;
    printf("%c ", s[i]);
    return stringEspacada(s, i+1);

}


int main(){
    char s[100];
    printf("Digite a sua string: ");
    scanf(" %99[^\n]", s);
    int i = 0;
    strungEspacada(s, i);
}