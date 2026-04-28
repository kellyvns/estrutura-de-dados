#include <stdio.h>

int main() {
    int l, c, soma = 0;
    printf("Linhas: ");
    scanf("%d", &l);
    printf("Colunas: ");
    scanf("%d", &c);

    int m[l][c];

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
            soma += m[i][j];
        }
    }

    printf("Soma: %d\n", soma);

    return 0;
}