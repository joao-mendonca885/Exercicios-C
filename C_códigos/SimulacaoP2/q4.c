#include <stdio.h>
#define max 100

typedef struct{
    int dia;
    int mes;
    int ano;
}data;




typedef struct{
    char nome[max];
    char telefone[max];
    char cidade[max];
    data compra;
    data venda;
}proprietarios;



typedef struct{
    int valor;
    char descricao[max];
}acessorios;



typedef struct{
    char modelo[max];
    char marca[max];
    int quilometragem;
    int ano;
    int valor_venda; 
    acessorios lista[10];
    proprietarios prop[5];
}Carro;



int main(){
    Carro carros[100];
    for (int i=0; i<100; i++){
        printf("%s", carros[i].modelo);
        printf("%s", carros[i].marca);
        printf("%d", carros[i].quilometragem);
        printf("%d", carros[i].ano);
        printf("%d", carros[i].valor_venda);
        for (int j=0; j<10; j++){
            printf("%d", carros[i].lista[j].valor);
            printf("%s", carros[i].lista[j].descricao);
        }
        for (int k=0; k<5; k++){
            printf("%s", carros[i].prop[k].nome);
            printf("%s", carros[i].prop[k].telefone);
            printf("%s", carros[i].prop[k].cidade);
            printf("%d", carros[i].prop[k].compra.dia);
            printf("%d", carros[i].prop[k].compra.ano);
            printf("%d", carros[i].prop[k].compra.mes);
            printf("%d", carros[i].prop[k].venda.dia);
            printf("%d", carros[i].prop[k].venda.ano);
            printf("%d", carros[i].prop[k].venda.mes);
        }
    }
    return 0;
}