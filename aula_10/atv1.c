#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} Produto;

Produto lista[MAX];
int total = 0;

void inserir() {
    if (total >= MAX) {
        printf("Lista cheia!\n");
        return;
    }

    printf("Nome: ");
    scanf(" %[^\n]", lista[total].nome);
    printf("Quantidade: ");
    scanf("%d", &lista[total].quantidade);
    printf("Preco: ");
    scanf("%f", &lista[total].preco);

    total++;
}

void remover() {
    char nome[50];
    printf("Nome do produto para remover: ");
    scanf(" %[^\n]", nome);

    for (int i = 0; i < total; i++) {
        if (strcmp(lista[i].nome, nome) == 0) {
            for (int j = i; j < total - 1; j++) {
                lista[j] = lista[j + 1];
            }
            total--;
            printf("Removido!\n");
            return;
        }
    }
    printf("Produto nao encontrado.\n");
}

void atualizar() {
    char nome[50];
    printf("Nome do produto: ");
    scanf(" %[^\n]", nome);

    for (int i = 0; i < total; i++) {
        if (strcmp(lista[i].nome, nome) == 0) {
            printf("Nova quantidade: ");
            scanf("%d", &lista[i].quantidade);
            return;
        }
    }
    printf("Produto nao encontrado.\n");
}

void totalCompra() {
    float soma = 0;
    for (int i = 0; i < total; i++) {
        soma += lista[i].quantidade * lista[i].preco;
    }
    printf("Total: R$ %.2f\n", soma);
}

void listar() {
    for (int i = 0; i < total; i++) {
        printf("%s | Qtd: %d | Preco: %.2f\n",
               lista[i].nome,
               lista[i].quantidade,
               lista[i].preco);
    }
}

int main() {
    int op;

    do {
        printf("\n1-Inserir\n2-Remover\n3-Atualizar\n4-Total\n5-Listar\n0-Sair\n");
        scanf("%d", &op);

        switch (op) {
            case 1: inserir(); break;
            case 2: remover(); break;
            case 3: atualizar(); break;
            case 4: totalCompra(); break;
            case 5: listar(); break;
        }
    } while (op != 0);

    return 0;
}