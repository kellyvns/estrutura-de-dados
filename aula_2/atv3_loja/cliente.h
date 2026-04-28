#ifndef CLIENTE_H
#define CLIENTE_H

typedef struct {
    int id;
    char nome[50];
} Cliente;

Cliente cadastrarCliente(int id, char nome[]);

#endif