#ifndef PILHA_H
#define PILHA_H

typedef struct No
{
    int valor;
    struct No *prox;
} No;

typedef struct
{
    No *topo;
} Pilha;

Pilha* criar();
void inserir(Pilha *p, int valor);
void mostrar(Pilha *p);
void remover(Pilha *p);
void liberar(Pilha *p);

#endif