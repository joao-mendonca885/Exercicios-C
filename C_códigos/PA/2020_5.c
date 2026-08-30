#include <stdio.h>
#include <stdlib.h>
#define max 10

typedef struct{
    char nome[100];
}Tprofessores;


typedef struct{
    char nome[100];
    int carga_horaria;
    Tprofessores professores[5];
}disciplinas;


typedef struct{
    char nome[100];
    int codigo;
    disciplinas materias[80];
}curso;

void imprimir(curso cursos[]){
    int i;
    for (i=0; i<100; i++){
        printf("%s", cursos[i].nome);
        printf("%d", cursos[i].codigo);
        for (int j=0; j<80; j++){
            printf("%s", cursos[i].materias[j].nome);
            printf("%d", cursos[i].materias[j].carga_horaria);
            for (int k=0; k<5; k++){
                printf("%s", cursos[i].materias[j].professores[k].nome);
            }
        }
    }
}


int main(){
    curso cursos[100];
    imprimir(cursos);
    return 0;
}