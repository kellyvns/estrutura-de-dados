#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido! O vetor deve ter pelo menos 1 posição.\n");
        return 1;
    }

    int *vetor = (int*) malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite os %d valores inteiros:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    int indice;

    printf("Digite o índice que deseja consultar: ");
    scanf("%d", &indice);

    if (indice < 0 || indice >= tamanho) {
        printf("Índice inválido! Informe um valor entre 0 e %d.\n", tamanho - 1);
    } else {
        printf("Valor armazenado na posição %d: %d\n", indice, vetor[indice]);
    }

    free(vetor);

    return 0;
}