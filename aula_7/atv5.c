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
            scanf("%d", &m[i][j]);
        }
    }

    int maior = m[0][0];
    int li = 0, co = 0;

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            if(m[i][j] > maior) {
                maior = m[i][j];
                li = i;
                co = j;
            }
        }
    }

    printf("Maior: %d\n", maior);
    printf("Posicao: [%d][%d]\n", li, co);

    return 0;
}