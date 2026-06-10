#include <stdio.h>




char *semDuplicatas(char s[]){
    int i;
    static char n[100]; 
    int y=0;
    for (i=0; s[i] != '\0'; i++){
        if (s[i] != s[i+1]){
            n[y] = s[i];
            y++;
        }
    }
    n[y] = '\0';
    return n;
}





int main(){
    char s[100];
    printf("Digite sua string: ");
    scanf(" %99[^\n]", s);
    printf("String sem duplicatas: %s", semDuplicatas(s));
}