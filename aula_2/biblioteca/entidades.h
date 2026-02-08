#ifndef ENTIDADES_H
#define ENTIDADES_H

#define MAX 100

typedef struct {
    int codigo;
    char titulo[100];
    char autor[100];
} Livro;

typedef struct {
    int id;
    char nome[100];
} Usuario;

typedef struct {
    int idUsuario;
    int codigoLivro;
    char data[20];
} Emprestimo;

#endif

