#include <stdio.h>

int vogais(char s[]){
    int j;
    char vogais[] = "aeiouAEIOU";
    int i;
    int n = 0;
    for (j = 0; s[j] != '\0'; j++){
        for (i=0; vogais[i] != '\0'; i++){
            if (vogais[i] == s[j]){
                n++;
            } 
        }
    }
    return n;
}





int consoantes(char s[]){
    int j;
    char consoantes[] = "qwrtyplkjhgfdszxcvbnmQWRTYPSDFGHJKLZXCVBNM";
    int i;
    int n = 0;
    for (j = 0; s[j] != '\0'; j++){
        for (i=0; consoantes[i] != '\0'; i++){
            if (consoantes[i] == s[j]){
                n++;
            } 
        }
    }
    return n;
}


int main(){
    char s[100];
    printf("Digite sua string: ");
    scanf(" %99[^\n]", s);
    printf("Número de consoantes: %d\n", consoantes(s));
    printf("Número de vogais: %d", vogais(s));
}