#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No {
    char nome[50];
    char telefone[20];
    char email[50];
    struct No* prox;
} No;

No* inicio = NULL;

void inserir() {
    No* novo = (No*) malloc(sizeof(No));

    printf("Nome: ");
    scanf(" %[^\n]", novo->nome);
    printf("Telefone: ");
    scanf(" %[^\n]", novo->telefone);
    printf("Email: ");
    scanf(" %[^\n]", novo->email);

    novo->prox = inicio;
    inicio = novo;
}

void remover() {
    char nome[50];
    printf("Nome para remover: ");
    scanf(" %[^\n]", nome);

    No *atual = inicio, *ant = NULL;

    while (atual != NULL) {
        if (strcmp(atual->nome, nome) == 0) {
            if (ant == NULL)
                inicio = atual->prox;
            else
                ant->prox = atual->prox;

            free(atual);
            printf("Removido!\n");
            return;
        }
        ant = atual;
        atual = atual->prox;
    }
    printf("Nao encontrado.\n");
}

void buscar() {
    char nome[50];
    printf("Nome para buscar: ");
    scanf(" %[^\n]", nome);

    No* atual = inicio;

    while (atual != NULL) {
        if (strcmp(atual->nome, nome) == 0) {
            printf("%s | %s | %s\n",
                   atual->nome,
                   atual->telefone,
                   atual->email);
            return;
        }
        atual = atual->prox;
    }
    printf("Nao encontrado.\n");
}

void listar() {
    No* atual = inicio;

    while (atual != NULL) {
        printf("%s | %s | %s\n",
               atual->nome,
               atual->telefone,
               atual->email);
        atual = atual->prox;
    }
}

void liberar() {
    No* atual = inicio;
    while (atual != NULL) {
        No* temp = atual;
        atual = atual->prox;
        free(temp);
    }
}

int main() {
    int op;

    do {
        printf("\n1-Inserir\n2-Remover\n3-Buscar\n4-Listar\n0-Sair\n");
        scanf("%d", &op);

        switch (op) {
            case 1: inserir(); break;
            case 2: remover(); break;
            case 3: buscar(); break;
            case 4: listar(); break;
        }
    } while (op != 0);

    liberar();
    return 0;
}