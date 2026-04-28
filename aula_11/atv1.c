#include <stdio.h>
#include <stdlib.h>

typedef struct Elemento {
    int num;
    struct Elemento *prox;
} Elemento;

typedef struct {
    Elemento *inicio;
    Elemento *fim;
} Fila;


Fila* cria_fila();
void insere_elemento(Fila *fi, int valor);
void remove_elemento_fila(Fila *fi);
void consulta_fila(Fila *fi);

Fila* cria_fila() {
    Fila *fi = (Fila *) malloc(sizeof(Fila));
    if (fi != NULL) {
        fi->inicio = NULL;
        fi->fim = NULL;
    }
    return fi;
}

void insere_elemento(Fila *fi, int valor) {
    Elemento *novo = (Elemento *) malloc(sizeof(Elemento));
    if (novo == NULL) return;

    novo->num = valor;
    novo->prox = NULL;

    if (fi->inicio == NULL) {
        fi->inicio = novo;
        fi->fim = novo;
    } else {
        fi->fim->prox = novo;
        fi->fim = novo;
    }
}

void remove_elemento_fila(Fila *fi) {
    if (fi->inicio == NULL) {
        printf("\nFila vazia!\n");
        return;
    }

    Elemento *aux = fi->inicio;
    printf("\nRemovido: %d\n", aux->num);

    fi->inicio = fi->inicio->prox;

    if (fi->inicio == NULL) {
        fi->fim = NULL;
    }

    free(aux);
}

void consulta_fila(Fila *fi) {
    if (fi->inicio == NULL) {
        printf("\nFila vazia!\n");
        return;
    }

    Elemento *aux = fi->inicio;

    printf("\nFila: ");
    while (aux != NULL) {
        printf("%d -> ", aux->num);
        aux = aux->prox;
    }
    printf("NULL\n");
}


int main() {
    Fila *fi = cria_fila();

    insere_elemento(fi, 10);
    insere_elemento(fi, 20);
    insere_elemento(fi, 30);

    consulta_fila(fi);

    remove_elemento_fila(fi);

    consulta_fila(fi);

    return 0;
}