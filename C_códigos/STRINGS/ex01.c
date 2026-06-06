#include <stdio.h>
#include <string.h>
#define MAX 100

char *inverter(char s[]){
    strlen(s);
    int i;
    char n[100];
    int y=0;
    for (i=strlen(s); i!=0; i--){
        n[y] = s[i];
        y++;
    }
    n[y+1] = '\0';
    return n;
}

int main(){
    char s[100];
    printf("Digite a String: ");
    fgets(s, sizeof(s), stdin);
    printf("%s", inverter(s));
    return 0;
}