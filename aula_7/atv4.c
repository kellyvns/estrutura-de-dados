#include <stdio.h>

int main() {
    int l, c, pares = 0;
    printf("Linhas: ");
    scanf("%d", &l);
    printf("Colunas: ");
    scanf("%d", &c);

    int m[l][c];

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
            if(m[i][j] % 2 == 0) {
                pares++;
            }
        }
    }

    printf("Pares: %d\n", pares);

    return 0;
}