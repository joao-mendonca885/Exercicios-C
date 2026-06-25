#include <stdio.h>


int simbolos(char s[]){
    int i;
    int cont = 0;
    for (i=0; s[i]!= '\0'; i++){
        if (!(s[i]>= 'a' && s[i]<= 'z' || s[i] >= 'A' && s[i]<= 'Z')){
            s[i] = '*';
            cont++;
        }
        printf("%c", s[i]);
    }
    return cont;
}






int main(){
    char s[100];
    scanf(" %99[^\n]", s);
    printf("%d", simbolos(s));
}