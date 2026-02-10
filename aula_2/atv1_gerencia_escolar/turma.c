#include <stdio.h>
#include "turma.h"

Turma cadastrarTurma () { // função cadastrar a turka

    Turma turmax; // variavvel local dessa função

    printf("Código da turma: ");
    scanf("%d", &turmax.codigo);
    getchar();

    printf("Nome da turma: ");
    fgets(turmax.nome, 50, stdin);

    turmax.quant_alunos = 0; // starta o vetor

    return turmax;

}

void inserirAluno(Turma *turmax) { // void nn retorna, * ponteiro  

    if (turmax->quant_alunos >= max_alunos) {  //a seta "verifica" o valor da variavel 
        printf("Turma cheia.");
        return;
    }

    Aluno alunox = cadastrarAluno(); // chama a função cadastrar aluno e guarda na variavel alunox
    turmax->alunos[turmax->quant_alunos] = alunox; //turmax é o ponteiro // -> acessa o vetor alunos // [turmax->quant_alunos] posição do vetor // = alunox atribui o aluno cadastrado na posição do vetor
    turmax->quant_alunos++; // incrementa e joga o vetor pra proxima posição
}

void listarAlunos(Turma turmax) {
    if (turmax.quant_alunos == 0) { // verifica se a turma tem akuno cadastrado
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    for (int i = 0; i < turmax.quant_alunos; i++) { // varre o vetor de alunos
        printf("Aluno %d:\n", i+1); // mostra o aluno e incrementa 
        exibirAluno(turmax.alunos[i]); //turmax == estrutura, alunos é o vetor, [i] posição do vetor
    }
}










