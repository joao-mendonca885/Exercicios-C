#include <stdio.h>
#include <string.h>

char *inverterString(char s[]){
    int i = strlen(s) - 1;
    int j;
    for (j=0; j < i; j++, i--){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    return s;
}

int main(){
    char s[100];
    printf("Digite sua string: ");
    fgets(s, sizeof(s), stdin);
    printf("%s", inverterString(s));
    return 0;
}