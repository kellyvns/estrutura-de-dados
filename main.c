#include <stdio.h>
#include "professor.h"
#include "produto.h"
#include "livro.h"
#include "cliente.h"
#include "funcionario.h"
#include "carro.h"
#include "conta.h"
#include "endereco.h"
#include "filme.h"
#include "aluno.h"

int main() {

    Professor p;
    printf("\n--- Professor ---\n");
    scanf("%d %49s %f", &p.id, p.nome, &p.salario);
    printf("ID: %d | Nome: %s | Salário: %.2f\n", p.id, p.nome, p.salario);

    Produto prod;
    printf("\n--- Produto ---\n");
    scanf("%d %49s %f", &prod.codigo, prod.nome, &prod.preco);
    printf("Código: %d | Nome: %s | Preço: %.2f\n", prod.codigo, prod.nome, prod.preco);

    Livro l;
    printf("\n--- Livro ---\n");
    scanf("%19s %99s %49s", l.isbn, l.titulo, l.autor);
    printf("ISBN: %s | Título: %s | Autor: %s\n", l.isbn, l.titulo, l.autor);

    Cliente c;
    printf("\n--- Cliente ---\n");
    scanf("%d %49s %19s", &c.id, c.nome, c.telefone);
    printf("ID: %d | Nome: %s | Telefone: %s\n", c.id, c.nome, c.telefone);

    Funcionario f;
    printf("\n--- Funcionário ---\n");
    scanf("%d %49s %f", &f.matricula, f.nome, &f.salario);
    printf("Matrícula: %d | Nome: %s | Salário: %.2f\n", f.matricula, f.nome, f.salario);

    Carro car;
    printf("\n--- Carro ---\n");
    scanf("%9s %49s %d", car.placa, car.modelo, &car.ano);
    printf("Placa: %s | Modelo: %s | Ano: %d\n", car.placa, car.modelo, car.ano);

    Conta conta;
    printf("\n--- Conta ---\n");
    scanf("%d %49s %f", &conta.numero, conta.titular, &conta.saldo);
    printf("Número: %d | Titular: %s | Saldo: %.2f\n", conta.numero, conta.titular, conta.saldo);

    Endereco e;
    printf("\n--- Endereço ---\n");
    scanf("%49s %d %49s", e.rua, &e.numero, e.cidade);
    printf("Rua: %s | Número: %d | Cidade: %s\n", e.rua, e.numero, e.cidade);

    Filme fi;
    printf("\n--- Filme ---\n");
    scanf("%99s %49s %d", fi.titulo, fi.genero, &fi.duracao);
    printf("Título: %s | Gênero: %s | Duração: %d min\n", fi.titulo, fi.genero, fi.duracao);

    Aluno a;
    printf("\n--- Aluno ---\n");
    scanf("%d %49s %f %f", &a.id, a.nome, &a.nota1, &a.nota2);
    float media = (a.nota1 + a.nota2) / 2;
    printf("ID: %d | Nome: %s | Média: %.2f\n", a.id, a.nome, media);

    return 0;
}
