#ifndef VENDA_H
#define VENDA_H

#include "cliente.h"
#include "produto.h"

#define MAX_PRODUTOS 50

typedef struct {
    Cliente cliente;
    Produto listaProdutos[MAX_PRODUTOS];
    int qtdProdutos;
    float valorTotal;
} Venda;

Venda criarVenda(Cliente c);
void adicionarProdutoVenda(Venda *v, Produto p);
void exibirResumoVenda(Venda v);

#endif