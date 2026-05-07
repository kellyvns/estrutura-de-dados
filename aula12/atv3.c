#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Container
{
    char nome[50];
    int id;
    char destino[50];

    struct Container *prox;

} Container;

Container *topo = NULL;

void inserir()
{
    Container *novo = malloc(sizeof(Container));

    printf("Nome: ");
    getchar();
    fgets(novo->nome, 50, stdin);

    printf("ID: ");
    scanf("%d", &novo->id);

    printf("Destino: ");
    getchar();
    fgets(novo->destino, 50, stdin);

    novo->prox = topo;
    topo = novo;
}

void remover()
{
    if(topo == NULL)
    {
        printf("Pilha vazia!\n");
        return;
    }

    Container *aux = topo;

    printf("Container removido: %s", aux->nome);

    topo = topo->prox;

    free(aux);
}

void mostrar()
{
    Container *aux = topo;

    while(aux != NULL)
    {
        printf("\nNome: %s", aux->nome);
        printf("ID: %d\n", aux->id);
        printf("Destino: %s", aux->destino);

        aux = aux->prox;
    }
}

void topoContainer()
{
    if(topo == NULL)
    {
        printf("Pilha vazia!\n");
        return;
    }

    printf("\nProximo container:\n");
    printf("Nome: %s", topo->nome);
}

int main()
{
    int op;

    do
    {
        printf("\n1 - Inserir\n");
        printf("2 - Remover\n");
        printf("3 - Mostrar\n");
        printf("4 - Proximo\n");
        printf("0 - Sair\n");

        scanf("%d", &op);

        switch(op)
        {
            case 1:
                inserir();
                break;

            case 2:
                remover();
                break;

            case 3:
                mostrar();
                break;

            case 4:
                topoContainer();
                break;
        }

    } while(op != 0);

    return 0;
}