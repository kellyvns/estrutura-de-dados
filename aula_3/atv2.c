#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    int codigo[MAX], quantidade[MAX];
    char nome[MAX][50];
    int total = 0, opcao;

    do {
        printf("\n CONTROLE DE ESTOQUE \n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Atualizar quantidade\n");
        printf("3 - Remover produto\n");
        printf("4 - Listar produtos\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            int cod, existe = 0;

            if (total < MAX) {
                printf("Código: ");
                scanf("%d", &cod);

                for (int i = 0; i < total; i++) {
                    if (codigo[i] == cod) {
                        existe = 1;
                        break;
                    }
                }

                if (existe) {
                    printf("Código já cadastrado!\n");
                } else {
                    codigo[total] = cod;
                    printf("Nome: ");
                    scanf(" %[^\n]", nome[total]);
                    printf("Quantidade: ");
                    scanf("%d", &quantidade[total]);

                    if (quantidade[total] < 0) {
                        printf("Quantidade inválida!\n");
                    } else {
                        total++;
                    }
                }
            } else {
                printf("Estoque cheio!\n");
            }
        }

        else if (opcao == 2) {
            int cod, achou = 0;

            printf("Informe o código: ");
            scanf("%d", &cod);

            for (int i = 0; i < total; i++) {
                if (codigo[i] == cod) {
                    printf("Nova quantidade: ");
                    scanf("%d", &quantidade[i]);
                    if (quantidade[i] < 0) {
                        printf("Quantidade inválida!\n");
                        quantidade[i] = 0;
                    }
                    achou = 1;
                    break;
                }
            }

            if (!achou) printf("Produto não encontrado!\n");
        }

        else if (opcao == 3) {
            int cod, pos = -1;

            printf("Informe o código: ");
            scanf("%d", &cod);

            for (int i = 0; i < total; i++) {
                if (codigo[i] == cod) {
                    pos = i;
                    break;
                }
            }

            if (pos != -1) {
                for (int i = pos; i < total - 1; i++) {
                    codigo[i] = codigo[i + 1];
                    quantidade[i] = quantidade[i + 1];
                    strcpy(nome[i], nome[i + 1]);
                }
                total--;
            } else {
                printf("Produto não encontrado!\n");
            }
        }

        else if (opcao == 4) {
            printf("\nProdutos cadastrados:\n");
            for (int i = 0; i < total; i++) {
                printf("Código: %d | Nome: %s | Quantidade: %d\n",
                       codigo[i], nome[i], quantidade[i]);
            }
        }

    } while (opcao != 0);

    return 0;
}