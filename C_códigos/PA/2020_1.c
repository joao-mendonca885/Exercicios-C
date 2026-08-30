#include <stdio.h>
#include <string.h>
int troca(char s[]){
    int i;
    int cont=0;
    for (i=0; s[i] != '\0'; i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 32;
            cont++;
        }
    }
    for (i=0; s[i] != '\0'; i++){
        printf("%c", s[i]);
    }
    return cont;
}





int main(){
    char s[250];
    scanf(" 249%[^\n]", s);
    printf("%d", troca(s));
    return 0;
}