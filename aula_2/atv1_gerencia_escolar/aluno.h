typedef struct { // estrutura aluno
    int id; // id aluno
    char nome[50]; // nome aluno 
    float nota; // nota aluno
} Aluno;

Aluno cadastrarAluno(); // protótipo da função cadastrar aluno
void exibirAluno (Aluno alunox); // protótipo da função exibir aluno