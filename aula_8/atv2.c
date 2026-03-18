#include <stdio.h>

int main() {
    float temp[7][3];
    float mediaDia[7], mediaTurno[3] = {0};

    for(int i = 0; i < 7; i++) {
        printf("\nDia %d:\n", i+1);
        for(int j = 0; j < 3; j++) {
            scanf("%f", &temp[i][j]);
        }
    }

    for(int i = 0; i < 7; i++) {
        float soma = 0;
        for(int j = 0; j < 3; j++) {
            soma += temp[i][j];
        }
        mediaDia[i] = soma / 3;
    }

    for(int j = 0; j < 3; j++) {
        float soma = 0;
        for(int i = 0; i < 7; i++) {
            soma += temp[i][j];
        }
        mediaTurno[j] = soma / 7;
    }

    int diaQuente = 0;
    for(int i = 1; i < 7; i++) {
        if(mediaDia[i] > mediaDia[diaQuente]) {
            diaQuente = i;
        }
    }

    printf("\nMedia por dia:\n");
    for(int i = 0; i < 7; i++) {
        printf("Dia %d: %.2f\n", i+1, mediaDia[i]);
    }

    printf("\nMedia por turno:\n");
    for(int j = 0; j < 3; j++) {
        printf("Turno %d: %.2f\n", j+1, mediaTurno[j]);
    }

    printf("\nDia mais quente: %d\n", diaQuente + 1);

    return 0;
}