#include <stdio.h>
#include <string.h>




// ainda em producao!
char *reversao(char s[], char n[]){
    int len = strlen(s)-1;
    int posWord;
    int posicionar_word;
    int lenN = 0;
    while(len >=0){
        for (posWord = len; s[posWord] != ' ' && posWord>=0  ; posWord--); //posWord termina com a posicao do espaco ' '
        int posWordFix = posWord - 1; // começa do último caracter
        for(posicionar_word = lenN; len>=posWord+1; posicionar_word++, posWord++){
            n[posicionar_word] = s[posWord+1];
        }
        n[posicionar_word] = ' ';
        lenN = posicionar_word+1;
        len = posWordFix;
    }
    n[strlen(s)] = '\0';
    return n;
}



int main(){
    char s[100];
    printf("Digite sua string: ");
    scanf(" %99[^\n]", s);
    char n[100];
    printf("String revertida: %s", reversao(s, n));
    return 0;
}