#include <stdio.h>
#include "aluno.h"

Aluno cadastrarAluno() { // função cadastrar aluno

    Aluno alunox; // variável local só dessa função

    printf("ID do aluno: "); 
    scanf("%d", &alunox.id);
    getchar(); // limpa se ficar lixo

    printf("Nome do aluno: ");
    fgets(alunox.nome, 50, stdin);

    printf("Nota do aluno: ");
    scanf("%f", &alunox.nota);

    return alunox; // devolve os valores da variável (estrutura)

}

void exibirAluno (Aluno alunox) { // recebe de parâmetro um aluno pronto

    printf("ID aluno: %d\n", alunox.id); 
    printf("Nome aluno: %s\n", alunox.nome);
    printf("Nota: %.2f", alunox.nota);

}