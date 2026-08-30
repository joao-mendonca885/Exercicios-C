#include <stdio.h>
#include <string.h>
int remover_espacos(char s[]){
    int cont=0;
    char n[250];
    int i;
    int j = 0;
    for(i=0; s[i] != '\0'; i++){
        if (s[i] != ' '){
            n[j] = s[i];
            j++;
        }
        else cont++;
    }
    n[j] = '\0';
    for (i=0; n[i] != '\0'; i++){
        s[i] = n[i];
        printf("%c", s[i]);
    }
    s[i] = '\0';
    return cont;
}



int main(){
    char s[200];
    scanf(" %199[^\n]", s);
    printf("\n%d", remover_espacos(s));
}