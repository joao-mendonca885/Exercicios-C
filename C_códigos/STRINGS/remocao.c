#include <stdio.h>
#define MAX 100

int NaoehEspecial(char s){
    char alfabeticos[MAX] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
    int len;
    for (len=0; alfabeticos[len] != '\0'; len++){
        if (alfabeticos[len] == s){
            return 1;
        }
    }
    return 0;
}




char *remocaoEspeciais(char string[]){
    int contador;
    static char stringNaoEspecial[MAX];
    int i;
    int y = 0;
    for (i=0; string[i] != '\0'; i++){
        if (NaoehEspecial(string[i])){
            stringNaoEspecial[y] = string[i];
            y++;  
        }
    }
    return stringNaoEspecial;
}





int main(){
    char string[MAX];
    printf("Digite sua string: ");
    scanf(" %99[^\n]", string);
    printf("String sem caracteres especiais: %s", remocaoEspeciais(string));
}