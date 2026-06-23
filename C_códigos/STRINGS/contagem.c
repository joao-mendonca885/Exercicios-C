#include <stdio.h>
#include <string.h>


int contagem(char s[]){
    int i;
    for (i = 0; s[i]!='\0'; i++);
    return i-1;
}


int main(){
    char s[100];
    printf("Digite a sua string(Max: 100): ");
    fgets(s, sizeof(s), stdin);
    printf("%d", contagem(s));
}