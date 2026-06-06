#include <stdio.h>
      /*Extração de Substring: 
      Desenvolva uma função que extraia uma substring de uma string dada a posição inicial e o comprimento da substring 
      – não usar funções prontas, i.e. strchr(), strstr().*/


char *extracao(char s[], int posInicial, int len){
    int i;
    static char n[100];
    int y = 0;
    for (i=posInicial; i<posInicial + len; i++){
        n[y] = s[i];
        y++;
    }
    n[y] = '\0';
    return n;
}


int main(){
    char s[100];
    int posInicial;
    int len;
    printf("Digite sua string:");
    scanf(" %99[^\n]", s);
    printf("Posição inicial e comprimento, respectivamente: ");
    scanf("%d%d", &posInicial, &len);
    printf("String: %s", extracao(s, posInicial, len));
}