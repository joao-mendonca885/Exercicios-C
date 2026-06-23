#include <stdio.h>
#include <string.h>
#define MAX 100
#define MAX_AUTORES 10

typedef struct {
    int dia;
    int mes;
    int ano;
} Tdata;

typedef struct {
    char nome[MAX];
    char nacionalidade[MAX];
    Tdata dataNascimento;
} Tautor;

typedef struct {
    char titulo[MAX];
    Tdata dataPublicacao;
    Tautor autores[MAX_AUTORES];   // até 10 autores
    int numAutores;                 // quantos efetivamente preenchidos
    int qtdPages;
    int statusEmprestimo;
} Tlivro;


// Auxiliar: lê UM autor via ponteiro
void lerAutor(Tautor *autor, int numero) {
    printf("\n-- Autor %d --\n", numero);
    printf("Nome: ");
    scanf(" %99[^\n]", autor->nome);
    printf("Nacionalidade: ");
    scanf(" %99[^\n]", autor->nacionalidade);
    printf("Data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &autor->dataNascimento.dia,
                       &autor->dataNascimento.mes,
                       &autor->dataNascimento.ano);
}

// Req 2: lê UM livro e retorna a struct preenchida
Tlivro lerLivro() {
    Tlivro livro;
    int i;

    printf("Titulo: ");
    scanf(" %99[^\n]", livro.titulo);
    printf("Data de publicacao (dd mm aaaa): ");
    scanf("%d %d %d", &livro.dataPublicacao.dia,
                       &livro.dataPublicacao.mes,
                       &livro.dataPublicacao.ano);
    printf("Quantidade de paginas: ");
    scanf("%d", &livro.qtdPages);

    printf("Quantos autores? (max %d): ", MAX_AUTORES);
    scanf("%d", &livro.numAutores);
    if (livro.numAutores > MAX_AUTORES) livro.numAutores = MAX_AUTORES;

    for (i = 0; i < livro.numAutores; i++) {
        lerAutor(&livro.autores[i], i + 1);
    }

    livro.statusEmprestimo = 0;
    return livro;
}

// Preenche N livros no array usando lerLivro
void lerDados(Tlivro livro[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\n=== Livro %d ===\n", i + 1);
        livro[i] = lerLivro();
    }
}

// Imprime UM livro com todos seus autores
void imprimirLivro(Tlivro livro) {
    int i;
    printf("Titulo: %s\n", livro.titulo);
    printf("Publicacao: %02d/%02d/%d\n",
           livro.dataPublicacao.dia, livro.dataPublicacao.mes, livro.dataPublicacao.ano);
    printf("Paginas: %d\n", livro.qtdPages);
    printf("Autores (%d):\n", livro.numAutores);
    for (i = 0; i < livro.numAutores; i++) {
        printf("  %d. %s (%s) - %02d/%02d/%d\n",
               i + 1,
               livro.autores[i].nome,
               livro.autores[i].nacionalidade,
               livro.autores[i].dataNascimento.dia,
               livro.autores[i].dataNascimento.mes,
               livro.autores[i].dataNascimento.ano);
    }
}

void imprimirLivros(Tlivro livro[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\n=== Livro %d ===\n", i + 1);
        imprimirLivro(livro[i]);
    }
}

// Req 3: titulo + autores dos livros com +300 paginas
void livros300(Tlivro livro[], int n) {
    int i, j;
    printf("\n=== Livros com mais de 300 paginas ===\n");
    for (i = 0; i < n; i++) {
        if (livro[i].qtdPages > 300) {
            printf("Titulo: %s | Autores: ", livro[i].titulo);
            for (j = 0; j < livro[i].numAutores; j++) {
                printf("%s", livro[i].autores[j].nome);
                if (j < livro[i].numAutores - 1) printf(", ");
            }
            printf("\n");
        }
    }
}

// Req 4: cópia com tag, sem alterar o original
Tlivro copia(Tlivro original) {
    strcat(original.titulo, " [Edição Revisada]");
    return original;
}

// Req 5: busca livros pelo nome de qualquer um dos autores
void busca(Tlivro livro[], int n, char nomeAutor[]) {
    int i, j;
    int encontrou = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < livro[i].numAutores; j++) {
            if (strcmp(livro[i].autores[j].nome, nomeAutor) == 0) {
                printf("\n--- Livro encontrado ---\n");
                imprimirLivro(livro[i]);
                encontrou = 1;
                break;   // já achou neste livro, vai pro próximo
            }
        }
    }
    if (!encontrou) {
        printf("Nenhum livro deste autor no acervo\n");
    }
}

// Req 6: empréstimo de UM livro (ponteiro)
void realizarEmprestimo(Tlivro *livro) {
    if (livro->statusEmprestimo == 0) {
        livro->statusEmprestimo = 1;
        printf("Emprestimo realizado\n");
    } else {
        printf("Livro indisponivel\n");
    }
}

void imprimirListaCronologica(Tlivro livro[], int n) {
    printf("---------- Ordem de publicacao ----------\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %d\n", livro[i].titulo, livro[i].dataPublicacao.ano);
    }
}

void crescenteAnoPublicacao(Tlivro livro[], int n) {
    int i, j;
    for (j = 0; j < n - 1; j++) {
        for (i = 0; i < n - 1 - j; i++) {
            if (livro[i].dataPublicacao.ano > livro[i+1].dataPublicacao.ano) {
                Tlivro aux = livro[i];
                livro[i] = livro[i+1];
                livro[i+1] = aux;
            }
        }
    }
    imprimirListaCronologica(livro, n);
}
int main() {
    Tlivro livro[MAX];
    int n = 2;

    lerDados(livro, n);
    imprimirLivros(livro, n);
    livros300(livro, n);

    printf("\n=== Original (antes) ===\n");
    imprimirLivro(livro[0]);
    Tlivro copiado = copia(livro[0]);
    printf("\n=== Copia ===\n");
    imprimirLivro(copiado);
    printf("\n=== Original (depois) ===\n");
    imprimirLivro(livro[0]);

    busca(livro, n, livro[0].autores[0].nome);

    realizarEmprestimo(&livro[0]);
    realizarEmprestimo(&livro[0]);
    crescenteAnoPublicacao(livro, n);
    return 0;
}