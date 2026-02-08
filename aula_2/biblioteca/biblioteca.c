#include <stdio.h>
#include <string.h>
#include "biblioteca.h"

void cadastrarUsuario(Usuario usuarios[], int *qtdUsuarios) {
    Usuario u;
    printf("ID do usuário: ");
    scanf("%d", &u.id);
    getchar();
    printf("Nome: ");
    fgets(u.nome, 100, stdin);
    u.nome[strcspn(u.nome, "\n")] = '\0';

    usuarios[*qtdUsuarios] = u;
    (*qtdUsuarios)++;
}

void cadastrarLivro(Livro livros[], int *qtdLivros) {
    Livro l;
    printf("Código do livro: ");
    scanf("%d", &l.codigo);
    getchar();
    printf("Título: ");
    fgets(l.titulo, 100, stdin);
    l.titulo[strcspn(l.titulo, "\n")] = '\0';

    printf("Autor: ");
    fgets(l.autor, 100, stdin);
    l.autor[strcspn(l.autor, "\n")] = '\0';

    livros[*qtdLivros] = l;
    (*qtdLivros)++;
}

void registrarEmprestimo(Emprestimo emprestimos[], int *qtdEmprestimos) {
    Emprestimo e;
    printf("ID do usuário: ");
    scanf("%d", &e.idUsuario);
    printf("Código do livro: ");
    scanf("%d", &e.codigoLivro);
    getchar();
    printf("Data (dd/mm/aaaa): ");
    fgets(e.data, 20, stdin);
    e.data[strcspn(e.data, "\n")] = '\0';

    emprestimos[*qtdEmprestimos] = e;
    (*qtdEmprestimos)++;
}

void listarEmprestimosPorUsuario(Emprestimo emprestimos[], int qtdEmprestimos,
                                 Usuario usuarios[], int qtdUsuarios,
                                 Livro livros[], int qtdLivros) {
    int id;
    printf("Digite o ID do usuário: ");
    scanf("%d", &id);

    printf("\n Livros emprestados:\n");
    for (int i = 0; i < qtdEmprestimos; i++) {
        if (emprestimos[i].idUsuario == id) {
            for (int j = 0; j < qtdLivros; j++) {
                if (livros[j].codigo == emprestimos[i].codigoLivro) {
                    printf("- %s (%s) | Data: %s\n",
                           livros[j].titulo, livros[j].autor, emprestimos[i].data);
                }
            }
        }
    }
}
