#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* criar()
{
    Pilha *p = malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

void inserir(Pilha *p, int valor)
{
    No *novo = malloc(sizeof(No));

    novo->valor = valor;
    novo->prox = p->topo;

    p->topo = novo;
}

void mostrar(Pilha *p)
{
    No *aux = p->topo;

    while(aux != NULL)
    {
        printf("%d\n", aux->valor);
        aux = aux->prox;
    }
}

void remover(Pilha *p)
{
    if(p->topo == NULL)
    {
        printf("Pilha vazia!\n");
        return;
    }

    No *aux = p->topo;

    printf("Removido: %d\n", aux->valor);

    p->topo = aux->prox;

    free(aux);
}

void liberar(Pilha *p)
{
    No *aux;

    while(p->topo != NULL)
    {
        aux = p->topo;
        p->topo = aux->prox;
        free(aux);
    }

    free(p);
}

int main()
{
    Pilha *p = criar();

    inserir(p, 10);
    inserir(p, 20);
    inserir(p, 30);

    mostrar(p);

    remover(p);

    mostrar(p);

    liberar(p);

    return 0;
}