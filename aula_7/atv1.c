#include <stdio.h>

int main() {
    int l, c;
    printf("Linhas: ");
    scanf("%d", &l);
    printf("Colunas: ");
    scanf("%d", &c);

    int m[l][c];

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}