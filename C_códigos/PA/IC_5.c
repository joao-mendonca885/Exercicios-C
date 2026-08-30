#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Tdata;


typedef struct{
    char nome[100];
    Tdata d_nascimento;
    Tdata d_ingresso;
    char vaga[100];
}Tcandidato;


typedef struct{
   char sigla[100];
   Tcandidato candidatos[100];
   int numero;
}Partido;

void dados(Partido partidos[]){
    int i, j;
    for(i=0; i<10; i++){
        for(j=0; j<100; j++){
            printf("%s", partidos[i].candidatos[j].nome);
            printf("%s", partidos[i].sigla);
            printf("%s", partidos[i].candidatos[j].vaga);
        }
    }
}


int main(){
    Partido partidos[10];
    dados(partidos);
    return 0;
}