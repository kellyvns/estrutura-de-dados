#include <stdio.h>
#include <stdlib.h>


typedef struct Cliente {
    int id;
    int tempo;
    struct Cliente *prox;
} Cliente;

typedef struct {
    Cliente *inicio;
    Cliente *fim;
} Fila;


Fila* criar_fila() {
    Fila *f = (Fila *) malloc(sizeof(Fila));
    if (f != NULL) {
        f->inicio = NULL;
        f->fim = NULL;
    }
    return f;
}

void inserir_cliente(Fila *f, int id, int tempo) {
    Cliente *novo = (Cliente *) malloc(sizeof(Cliente));
    if (novo == NULL) return;

    novo->id = id;
    novo->tempo = tempo;
    novo->prox = NULL;

    if (f->fim == NULL) {
        f->inicio = novo;
        f->fim = novo;
    } else {
        f->fim->prox = novo;
        f->fim = novo;
    }

    printf("\nCliente %d inserido (tempo: %d)\n", id, tempo);
}

void atender_cliente(Fila *f) {
    if (f->inicio == NULL) {
        printf("\nFila vazia!\n");
        return;
    }

    Cliente *aux = f->inicio;

    printf("\nAtendendo cliente %d (tempo: %d)\n", aux->id, aux->tempo);

    f->inicio = aux->prox;

    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    free(aux);
}

void exibir_fila(Fila *f) {
    if (f->inicio == NULL) {
        printf("\nFila vazia!\n");
        return;
    }

    Cliente *aux = f->inicio;

    printf("\nClientes na fila:\n");
    while (aux != NULL) {
        printf("ID: %d | Tempo: %d\n", aux->id, aux->tempo);
        aux = aux->prox;
    }
}

int calcular_tempo_total(Fila *f) {
    int total = 0;
    Cliente *aux = f->inicio;

    while (aux != NULL) {
        total += aux->tempo;
        aux = aux->prox;
    }

    return total;
}


int main() {
    Fila *fila = criar_fila();

    int opcao, id, tempo;

    do {
        printf("\n===== FILA DO BANCO =====\n");
        printf("1 - Inserir cliente\n");
        printf("2 - Atender cliente\n");
        printf("3 - Exibir fila\n");
        printf("4 - Tempo total de espera\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("ID: ");
                scanf("%d", &id);
                printf("Tempo: ");
                scanf("%d", &tempo);
                inserir_cliente(fila, id, tempo);
                break;

            case 2:
                atender_cliente(fila);
                break;

            case 3:
                exibir_fila(fila);
                break;

            case 4:
                printf("\nTempo total: %d\n", calcular_tempo_total(fila));
                break;

            case 0:
                printf("\nEncerrando...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}