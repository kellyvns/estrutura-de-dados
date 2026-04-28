#include <stdio.h>
#include <string.h>
#include "cliente.h"
#include "produto.h"
#include "venda.h"

Cliente cadastrarCliente(int id, char nome[]) {
    Cliente c;
    c.id = id;
    strcpy(c.nome, nome);
    return c;
}

Produto cadastrarProduto(int cod, char nome[], float preco) {
    Produto p;
    p.codigo = cod;
    strcpy(p.nome, nome);
    p.preco = preco;
    return p;
}

Venda criarVenda(Cliente c) {
    Venda v;
    v.cliente = c;
    v.qtdProdutos = 0;
    v.valorTotal = 0.0;
    return v;
}

void adicionarProdutoVenda(Venda *v, Produto p) {
    if (v->qtdProdutos < MAX_PRODUTOS) {
        v->listaProdutos[v->qtdProdutos] = p;
        v->qtdProdutos++;
        v->valorTotal += p.preco;
    } else {
        printf("Erro: Limite de produtos atingido!\n");
    }
}

void exibirResumoVenda(Venda v) {
    printf("\n--- RESUMO DA VENDA ---\n");
    printf("Cliente: %s\n", v.cliente.nome);
    printf("Total de Itens: %d\n", v.qtdProdutos);
    printf("VALOR TOTAL: R$ %.2f\n", v.valorTotal);
    printf("-----------------------\n");
}

int main() {
    Cliente c1 = cadastrarCliente(1, "Joao Vitor");
    Produto p1 = cadastrarProduto(101, "SSD 1TB", 450.00);
    Produto p2 = cadastrarProduto(102, "Memoria RAM 16GB", 320.00);

    Venda vendaAtual = criarVenda(c1);
    adicionarProdutoVenda(&vendaAtual, p1);
    adicionarProdutoVenda(&vendaAtual, p2);

    exibirResumoVenda(vendaAtual);

    return 0;
}