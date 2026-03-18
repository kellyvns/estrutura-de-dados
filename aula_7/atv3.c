#include <stdio.h>

int main() {
    int n, soma = 0;
    printf("Tamanho da matriz quadrada: ");
    scanf("%d", &n);

    int m[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        soma += m[i][i];
    }

    printf("Soma da diagonal: %d\n", soma);

    return 0;
}