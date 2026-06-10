#include <stdio.h>
#include <string.h>


char *insercao(char s[], char sub[], int pos){
    int i;
    int y = 0;
    int j;
    int z = 0;
    static char n[100];
    for (i=0; i <= strlen(s); i++){
        if (i != pos){
            n[y] = s[i];
            y++;
        }
        else{
            for (j=pos; sub[z] != '\0'; j++,z++){
                n[y] = sub[z];
                y++;
            }
            n[y] = s[i];
            y++;
        }
    }
    n[y] = '\0';
    return n;
}



int main(){
    char s[100];
    int pos;
    char sub[100];
    printf("Digite sua string: ");
    scanf(" %99[^\n]", s);
    printf("Digite sua substring: ");
    scanf(" %99[^\n]", sub);
    printf("Indique a posição que você quer acrescentar a substring: ");
    scanf("%d", &pos);
    printf("%s\n", insercao(s, sub, pos));
}