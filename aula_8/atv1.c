#include <stdio.h>

int main() {
    int setores, produtos;

    printf("Quantidade de setores: ");
    scanf("%d", &setores);

    printf("Quantidade de produtos por setor: ");
    scanf("%d", &produtos);

    int estoque[setores][produtos];

    for(int i = 0; i < setores; i++) {
        printf("\nSetor %d:\n", i);
        for(int j = 0; j < produtos; j++) {
            printf("Produto %d: ", j);
            scanf("%d", &estoque[i][j]);
        }
    }

    for(int i = 0; i < setores; i++) {
        int soma = 0;
        for(int j = 0; j < produtos; j++) {
            soma += estoque[i][j];
        }
        printf("Total do setor %d: %d\n", i, soma);
    }

    for(int j = 0; j < produtos; j++) {
        int soma = 0;
        for(int i = 0; i < setores; i++) {
            soma += estoque[i][j];
        }
        printf("Total do produto %d: %d\n", j, soma);
    }

    printf("\nMatriz de estoque:\n");
    for(int i = 0; i < setores; i++) {
        for(int j = 0; j < produtos; j++) {
            printf("%d ", estoque[i][j]);
        }
        printf("\n");
    }

    return 0;
}