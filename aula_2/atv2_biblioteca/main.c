#include <stdio.h>
#include "biblioteca.h"

int main() {
    Usuario usuarios[MAX];
    Livro livros[MAX];
    Emprestimo emprestimos[MAX];

    int qtdUsuarios = 0, qtdLivros = 0, qtdEmprestimos = 0;
    int opcao;

    do {
        printf("\n----- Sistema da Biblioteca -----\n");
        printf("1. Cadastrar Usuário\n");
        printf("2. Cadastrar Livro\n");
        printf("3. Registrar Empréstimo\n");
        printf("4. Listar Livros por Usuário\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarUsuario(usuarios, &qtdUsuarios); break;
            case 2: cadastrarLivro(livros, &qtdLivros); break;
            case 3: registrarEmprestimo(emprestimos, &qtdEmprestimos); break;
            case 4: listarEmprestimosPorUsuario(emprestimos, qtdEmprestimos,
                                                usuarios, qtdUsuarios,
                                                livros, qtdLivros); break;
        }
    } while (opcao != 0);

    return 0;
}
