#include <stdio.h>

void conversao(char s[]){
    int i;
    int n[100];
    for (i=0; s[i] != '\0'; i++){
        if (s[i] >= '0' && s[i] <= '9'){
            n[i] = s[i] - '0';
        }
    }
    for(int j=0; j<i; j++){
        printf("%d", n[j]);
    }
}



int main(){
    char s[100];
    printf("Digite sua string: ");
    scanf(" %99[^\n]", s);
    printf("String convertida: ");
    conversao(s);
    return 0;
}