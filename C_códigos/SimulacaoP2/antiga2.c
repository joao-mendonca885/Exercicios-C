#include <stdio.h>

typedef struct{
    int horas;
    int minutos;
}horario;

horario funcao(int n){
    horario tempo;
    tempo.horas = n/60;
    tempo.minutos = n % 60;
    return tempo;
}


int main(){
    int n;
    scanf("%d", &n);
    funcao(n);
    return 0;
}