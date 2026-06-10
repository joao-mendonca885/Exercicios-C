#include <stdio.h>
#include <string.h>




// ainda em producao!
char *reversao(char s[]){
    int i; 
    i = strlen(s) - 1;
    int k;
    int y = 0;
    int z = 0;
    static char n[100];
    while (i >= 0){
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'){
            for (k = i + 1 ; k <= strlen(s) - 1 - z ; k++){
                n[y] = s[k];
                y++;
            }
            n[y] = ' ';
            y++;
            z = y;
        }
        i--; // posicao de inicio da palavra
    }
    i = 0;
    // para imprimir o primeiro caracter, já que antes dele não tem espaço.
    while (s[i] != ' ' && s[i] != '\n' && s[i] != '\t' && s[i] != '\0'){
        n[y] = s[i];
        y++;
        i++;
    }
    n[y] = '\0';
    return n;
}



int main(){
    char s[100];
    printf("Digite sua string: ");
    scanf(" %99[^\n]", s);
    printf("String revertida: %s", reversao(s));
}