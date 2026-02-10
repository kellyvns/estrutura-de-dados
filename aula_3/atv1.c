#include <stdio.h>

#define MAX 50

int main() {
    float notas[MAX];
    int total = 0;
    int opcao;

    do {
        printf("\n GERENCIAMENTO DE NOTAS \n");
        printf("1 - Inserir nota\n");
        printf("2 - Remover nota\n");
        printf("3 - Atualizar nota\n");
        printf("4 - Mostrar notas e estatísticas\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (total < MAX) {
                printf("Digite a nota: ");
                scanf("%f", &notas[total]);
                total++;
            } else {
                printf("Vetor cheio!\n");
            }
        }

        else if (opcao == 2) {
            int pos;
            printf("Informe a posição (0 a %d): ", total - 1);
            scanf("%d", &pos);

            if (pos >= 0 && pos < total) {
                for (int i = pos; i < total - 1; i++) {
                    notas[i] = notas[i + 1];
                }
                total--;
            } else {
                printf("Posição inválida!\n");
            }
        }

        else if (opcao == 3) {
            int pos;
            printf("Informe a posição da nota: ");
            scanf("%d", &pos);

            if (pos >= 0 && pos < total) {
                printf("Digite a nova nota: ");
                scanf("%f", &notas[pos]);
            } else {
                printf("Posição inválida!\n");
            }
        }

        else if (opcao == 4) {
            if (total == 0) {
                printf("Nenhuma nota cadastrada.\n");
            } else {
                float soma = 0, maior = notas[0], menor = notas[0];

                printf("\nNotas:\n");
                for (int i = 0; i < total; i++) {
                    printf("%.2f ", notas[i]);
                    soma += notas[i];
                    if (notas[i] > maior) maior = notas[i];
                    if (notas[i] < menor) menor = notas[i];
                }

                printf("\nMédia: %.2f", soma / total);
                printf("\nMaior nota: %.2f", maior);
                printf("\nMenor nota: %.2f\n", menor);
            }
        }

    } while (opcao != 0);

    return 0;
}