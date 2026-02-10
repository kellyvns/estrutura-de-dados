#include "aluno.h" //importa a estrutura aluno pra cá
 
#define max_alunos 15 //limita qnt max de alunos 

typedef struct { // estrutura turma
    int codigo; // codigo da turma
    char nome[50]; // nome do aluno
    int quant_alunos; // quantidade de alunos
    Aluno alunos[15]; // vetor de ESTRUTURA do TIPO aluno, cada espaço do vetor tem 1 estrutura) 
} Turma;

Turma cadastrarTurma(); // protótipo da função cadastrar turma
void inserirAluno(Turma *turmax); // protótipo da função inserir aluno na turma
void listarAlunos(Turma turmax); // protótipo da função listar alunos da turma