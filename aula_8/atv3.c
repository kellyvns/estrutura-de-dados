#include <stdio.h>

int main() {
    int n;
    printf("Tamanho da matriz (max 10): ");
    scanf("%d", &n);

    int m[10][10];
    int soma = 0, total = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
            soma += m[i][j];
            total++;
        }
    }

    float media = (float)soma / total;

    int diagPrincipal = 0, diagSec = 0;
    for(int i = 0; i < n; i++) {
        diagPrincipal += m[i][i];
        diagSec += m[i][n - i - 1];
    }

    int acima = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(m[i][j] > media) {
                acima++;
            }
        }
    }

    int simetrica = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(m[i][j] != m[j][i]) {
                simetrica = 0;
                break;
            }
        }
    }

    printf("Soma diagonal principal: %d\n", diagPrincipal);
    printf("Soma diagonal secundaria: %d\n", diagSec);
    printf("Elementos acima da media: %d\n", acima);

    if(simetrica)
        printf("A matriz e simetrica\n");
    else
        printf("A matriz nao e simetrica\n");

    return 0;
}