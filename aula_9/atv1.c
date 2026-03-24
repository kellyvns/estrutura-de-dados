#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *notas, soma = 0, maior, menor;

    scanf("%d", &n);

    notas = malloc(n * sizeof(float));

    for (int i = 0; i < n; i++) {
        scanf("%f", &notas[i]);
    }

    maior = menor = notas[0];

    for (int i = 0; i < n; i++) {
        soma += notas[i];

        if (notas[i] > maior) maior = notas[i];
        if (notas[i] < menor) menor = notas[i];
    }

    printf("Media: %.2f\n", soma / n);
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);

    free(notas);
}