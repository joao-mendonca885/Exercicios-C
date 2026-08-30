#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[100];
    char endereco[100];
    int telefone;
}Teditora;

typedef struct{
    char nome[100];
    char dataNasci[30];
    char sexo[30];
}Tautores;


typedef struct{
    char titulo[100];
    Tautores autor[10];
    char dataPubli[30];
    float preco;
    Teditora editora;
}Tlivro;

void imprimirAutores(Tlivro livro[], char editora[]){
    int i, j, k;
    for (i=0; i<1000; i++){
        if(strcmp(livro[i].editora.nome, editora) == 0){
            for (j=0; j<10; j++){
                printf("%s", livro[i].autor[j].nome);
            }
        }
    }
}


int main(){
    Tlivro livro[1000];
    char editora[100]; 
    printf("Informe a editora desejada: ");
    scanf(" %99[^\n]", editora);
    imprimirAutores(livro, editora);
}