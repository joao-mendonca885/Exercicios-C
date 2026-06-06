#include <stdio.h>


char *comparacao(char s[], char n[]){
    int i;
    for (i=0; s[i]!=0; i++){
        if (n[i] != s[i]) return "Não são iguais";
    }
    return "São iguais";
}

int main(){
    char s[100];
    printf("Digite sua string(Max: 100): ");
    fgets(s, sizeof(s), stdin);
    char n[100];
    printf("Digite sua string(Max: 100): ");
    fgets(n, sizeof(n), stdin);
    printf("%s", comparacao(s, n));
}