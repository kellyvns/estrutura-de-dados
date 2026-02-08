#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "entidades.h"

void cadastrarUsuario(Usuario usuarios[], int *qtdUsuarios);
void cadastrarLivro(Livro livros[], int *qtdLivros);
void registrarEmprestimo(Emprestimo emprestimos[], int *qtdEmprestimos);
void listarEmprestimosPorUsuario(Emprestimo emprestimos[], int qtdEmprestimos,
                                 Usuario usuarios[], int qtdUsuarios,
                                 Livro livros[], int qtdLivros);

#endif

