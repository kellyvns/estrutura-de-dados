#include <stdio.h>

int main() {
    int n;
    int v[100];

    printf("Quantidade de elementos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nVetor original:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] == v[j]) {
                for (int k = j; k < n - 1; k++) {
                    v[k] = v[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    printf("\n\nVetor após remover repetidos:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}