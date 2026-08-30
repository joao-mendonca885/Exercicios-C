#include <stdio.h>

#define MAX_MUSICAS 20
#define MAX_DISCOS 100

typedef struct{
    char nome[100];
    char compositor[100];
    char interprete[100];
    int duracao;
}Tmusica;

typedef struct{
    char gravadora[100];
    int ano;
    char estilo[100];
    char nome[100];
    int qtd_musicas;
    Tmusica musicas[MAX_MUSICAS];
}Tdisco;

void nomeMusicas(Tdisco disco[], int qtdDiscos){
    for (int i=0; i<qtdDiscos; i++){
        for (int j=0; j<disco[i].qtd_musicas; j++){
            printf("%s\n", disco[i].musicas[j].nome);
        }
    }
}

int main(){
    Tdisco disco[MAX_DISCOS];
    int qtdDiscos = 0; // ninguém cadastrado ainda
    nomeMusicas(disco, qtdDiscos); // não entra no loop, então é seguro
    return 0;
}