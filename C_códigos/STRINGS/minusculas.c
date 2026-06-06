#include <stdio.h>

char *minuscula(char s[]){
    char ma[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;
    int j;
    char mi[] = "abcdefghijklmnopqrstuvwxyz";
    for (i=0; s[i] != '\0'; i++){
        for (j=0; ma[j] != '\0'; j++){
            if (s[i] == ma[j]){
                s[i] = mi[j];
            }
        }
    }
    return s; 
}



int main(){
    char s[100];
    printf("Digite sua string: ");
    scanf(" %99[^\n]", s);
    printf("Tudo minúsculo: %s", minuscula(s));
}