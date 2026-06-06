#include <stdio.h>

int palavras(char s[]){
    int qtd = 0;
    int dentro_de_palavra = 0; // 0 significa FALSO (está no espaço), 1 significa VERDADEIRO (está na palavra)

    for (int i = 0; s[i] != '\0'; i++){
        // Se o caractere atual NÃO for um espaço
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n') {
            // Se o programa estava fora de uma palavra e acabou de achar uma letra...
            if (dentro_de_palavra == 0) {
                qtd++;                 // Encontrou o início de uma nova palavra!
                dentro_de_palavra = 1; // Sinaliza que agora está dentro de uma palavra
            }
        } 
        else {
            // Se achou um espaço, sinaliza que saiu da palavra
            dentro_de_palavra = 0;
        }
    }
    return qtd;
}

int main(){
    char s[100];
    printf("Digite sua string: ");
    // O seu scanf está perfeito! O [^\n] é a forma correta de ler espaços.
    scanf(" %99[^\n]", s); 
    
    printf("Quantidade de palavras: %d\n", palavras(s));
    return 0;
}