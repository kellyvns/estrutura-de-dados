#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Tarefa
{
    char nome[50];
    struct Tarefa *prox;
} Tarefa;

Tarefa *topo = NULL;

void inserir()
{
    Tarefa *nova = malloc(sizeof(Tarefa));

    printf("Digite a tarefa: ");
    getchar();
    fgets(nova->nome, 50, stdin);

    nova->prox = topo;
    topo = nova;
}

void remover()
{
    if(topo == NULL)
    {
        printf("Sem tarefas!\n");
        return;
    }

    Tarefa *aux = topo;

    printf("Proxima tarefa: %s", aux->nome);

    topo = topo->prox;

    free(aux);
}

int main()
{
    int op;

    do
    {
        printf("\n1 - Inserir tarefa\n");
        printf("2 - Obter tarefa\n");
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
        }

    } while(op != 0);

    return 0;
}