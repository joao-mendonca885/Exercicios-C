#include <stdio.h>
#include <string.h>


char *fsubstring(char string[], char substring[]){
    int i;
    int temSub;
    for (i=0; string[i] != '\0' ; i++){
        temSub = 0;
        if (string[i] == substring[0]){
            temSub = 1;
            for (int j = 0; substring[j] != '\0'; j++){
                if (substring[j] != string[i+j]){
                    temSub = 0;
                    if (strlen(substring) > strlen(string) - i){
                        return "Ausente";
                    }
                    break;
                }
            }
            if (temSub) return "Presente";
        }
    }
    return "Ausente";
}




int main(){
    char string[100];
    char substring[100];
    printf("Digite sua string: ");
    scanf(" %99[^\n]", string);
    printf("Digite sua substring: ");
    scanf(" %99[^\n]", substring);
    printf("A substring está %s", fsubstring(string, substring));
}