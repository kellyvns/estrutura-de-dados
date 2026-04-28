#include <stdio.h>
#include "turma.h"

/* tulio, eu comentei todas as linhas para me
ajudar a entender melhor tudo que foi usado e me auxiliare
em outras atividades, apliquei meus conhecimentos e fiz pesquisa 
pra fazer oque eu nn conseguia, compreendi tudo que foi usado, 
valeu. */

#define MAX_TURMAS 10


int main() {
    Turma turmas[MAX_TURMAS]; //turmas é o vetor // Tipo Turma
    int quantidadeTurmas = 0;  //posição 0 do vetor 
    int opcao;

    do { // loop dop menu
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar turma\n");
        printf("2 - Inserir aluno em turma\n");
        printf("3 - Listar alunos de uma turma\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) { 

        case 1: 
            if (quantidadeTurmas >= MAX_TURMAS) { //verifica se o vetor ta cheio
                printf("Limite de turmas atingido!\n");
            } else {
                turmas[quantidadeTurmas] = cadastrarTurma(); //chanma a função para cadastrar a turma
                quantidadeTurmas++; //incrementa no limite de turma
            }
            break;

        case 2:
            if (quantidadeTurmas == 0) { // verifica se tem turma cadastrada para inserir aluno
                printf("Nenhuma turma cadastrada.\n");
            } else {
                int indice; // var. local para guardar o nº da turma escolhida
                printf("Informe o indice da turma: (0 a %d)", quantidadeTurmas - 1); // -1 pra nn dar 11 turmas (vetor 0 a 9)
                scanf("%d", &indice);

                if (indice >= 0 && indice < quantidadeTurmas) { // verifica se ta dentro do limite (>=0 e <max)
                    inserirAluno(&turmas[indice]); //aponta a turma na memoria e adiciona o aluno na turma pela função 
                } else {
                    printf("Indice invalido.\n");
                }
            }
            break;

        case 3:
            if (quantidadeTurmas == 0) {
                printf("Nenhuma turma cadastrada.\n");
            } else {
                int indice;
                printf("Informe o indice da turma (0 a %d): ", quantidadeTurmas - 1);
                scanf("%d", &indice);

                if (indice >= 0 && indice < quantidadeTurmas) { //verifica se o indice é válido  
                    listarAlunos(turmas[indice]); //passa o endereço da turma escolkhida e a função lista os alunos
                } else {
                    printf("Indice invalido.\n");
                }
            }
            break;

        case 0:
            printf("Encerrando o programa...\n");
            break;

        default:
            printf("Opcao inválida!\n");
        }

    } while (opcao != 0);

}


//guilherme teixeira soares souza - c.comp 5º período.