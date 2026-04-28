#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No {
    char descricao[100];
    char prioridade[10];
    char status[15];
    struct No* ant;
    struct No* prox;
} No;

No* inicio = NULL;
No* fim = NULL;

void inserir() {
    No* novo = (No*) malloc(sizeof(No));

    printf("Descricao: ");
    scanf(" %[^\n]", novo->descricao);
    printf("Prioridade: ");
    scanf(" %[^\n]", novo->prioridade);
    printf("Status: ");
    scanf(" %[^\n]", novo->status);

    novo->prox = NULL;
    novo->ant = fim;

    if (fim != NULL)
        fim->prox = novo;
    else
        inicio = novo;

    fim = novo;
}

void remover() {
    char desc[100];
    printf("Descricao para remover: ");
    scanf(" %[^\n]", desc);

    No* atual = inicio;

    while (atual != NULL) {
        if (strcmp(atual->descricao, desc) == 0) {
            if (atual->ant != NULL)
                atual->ant->prox = atual->prox;
            else
                inicio = atual->prox;

            if (atual->prox != NULL)
                atual->prox->ant = atual->ant;
            else
                fim = atual->ant;

            free(atual);
            printf("Removido!\n");
            return;
        }
        atual = atual->prox;
    }
    printf("Nao encontrado.\n");
}

void listarInicio() {
    No* atual = inicio;
    while (atual != NULL) {
        printf("%s | %s | %s\n",
               atual->descricao,
               atual->prioridade,
               atual->status);
        atual = atual->prox;
    }
}

void listarFim() {
    No* atual = fim;
    while (atual != NULL) {
        printf("%s | %s | %s\n",
               atual->descricao,
               atual->prioridade,
               atual->status);
        atual = atual->ant;
    }
}

int main() {
    int op;

    do {
        printf("\n1-Inserir\n2-Remover\n3-Listar Inicio\n4-Listar Fim\n0-Sair\n");
        scanf("%d", &op);

        switch (op) {
            case 1: inserir(); break;
            case 2: remover(); break;
            case 3: listarInicio(); break;
            case 4: listarFim(); break;
        }
    } while (op != 0);

    return 0;
}