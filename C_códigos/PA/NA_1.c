#include <stdio.h>


int iterativa(char s[150]){
    int j;
    int cont=0;
    char vogais[] = "aeiou";
    for (int i=0; s[i] != '\0'; i++){
        for(j=0; j<5; j++){
            if (s[i] == vogais[j]) {
                cont++;
                break;
            }
        }
    }
    return cont;
}


int recursiva(char s[150]){
    if (s[0] == '\0') return 0;
    if (s[0] == 'a' || s[0] == 'e' || s[0] == 'o' || 
        s[0] == 'i' || s[0] == 'u') return 1 + recursiva(s+1);
    else return recursiva(s+1);
}




int main(){
    char s[150];
    scanf(" %149[^\n]", s);
    printf("%d", iterativa(s));
    printf("\n%d", recursiva(s));
    return 0;
}