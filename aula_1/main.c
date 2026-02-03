#include <stdio.h>

typedef struct {
    int id;
    char nome[50];
    float salario;
} Professor;

typedef struct {
    int codigo;
    char nome[50];
    float preco;
} Produto;

typedef struct {
    char isbn[20];
    char titulo[100];
    char autor[50];
} Livro;

typedef struct {
    int id;
    char nome[50];
    char telefone[20];
} Cliente;

typedef struct {
    int matricula;
    char nome[50];
    float salario;
} Funcionario;

typedef struct {
    char placa[10];
    char modelo[50];
    int ano;
} Carro;

typedef struct {
    int numero;
    char titular[50];
    float saldo;
} Conta;

typedef struct {
    char rua[50];
    int numero;
    char cidade[50];
} Endereco;

typedef struct {
    char titulo[100];
    char genero[50];
    int duracao;
} Filme;

typedef struct {
    int id;
    char nome[50];
    float nota1, nota2;
} Aluno;


void cadastrarProfessor() {
    Professor p;
    printf("\n--- Cadastro do Professor ---\n");
    printf("Digite o ID: ");
    scanf("%d", &p.id);
    printf("Digite o nome: ");
    scanf("%49s", p.nome);
    printf("Digite o salario: ");
    scanf("%f", &p.salario);
    printf("ID: %d | Nome: %s | Salário: %.2f\n", p.id, p.nome, p.salario);
}

void cadastrarProduto() {
    Produto p;
    printf("\n--- Cadastro do Produto ---\n");
    printf("Digite o código: ");
    scanf("%d", &p.codigo);
    printf("Digite o nome: ");
    scanf("%49s", p.nome);
    printf("Digite o preço: ");
    scanf("%f", &p.preco);
    printf("Código: %d | Nome: %s | Preço: %.2f\n", p.codigo, p.nome, p.preco);
}

void cadastrarLivro() {
    Livro l;
    printf("\n--- Cadastro do Livro ---\n");
    printf("Digite o ISBN: ");
    scanf("%19s", l.isbn);
    printf("Digite o título: ");
    scanf("%99s", l.titulo);
    printf("Digite o autor: ");
    scanf("%49s", l.autor);
    printf("ISBN: %s | Título: %s | Autor: %s\n", l.isbn, l.titulo, l.autor);
}

void cadastrarCliente() {
    Cliente c;
    printf("\n--- Cadastro do Cliente ---\n");
    printf("Digite o ID: ");
    scanf("%d", &c.id);
    printf("Digite o nome: ");
    scanf("%49s", c.nome);
    printf("Digite o telefone: ");
    scanf("%19s", c.telefone);
    printf("ID: %d | Nome: %s | Telefone: %s\n", c.id, c.nome, c.telefone);
}

void cadastrarFuncionario() {
    Funcionario f;
    printf("\n--- Cadastro do Funcionário ---\n");
    printf("Digite a matrícula: ");
    scanf("%d", &f.matricula);
    printf("Digite o nome: ");
    scanf("%49s", f.nome);
    printf("Digite o salário: ");
    scanf("%f", &f.salario);
    printf("Matrícula: %d | Nome: %s | Salário: %.2f\n", f.matricula, f.nome, f.salario);
}

void cadastrarCarro() {
    Carro c;
    printf("\n--- Cadastro do Carro ---\n");
    printf("Digite a placa: ");
    scanf("%9s", c.placa);
    printf("Digite o modelo: ");
    scanf("%49s", c.modelo);
    printf("Digite o ano: ");
    scanf("%d", &c.ano);
    printf("Placa: %s | Modelo: %s | Ano: %d\n", c.placa, c.modelo, c.ano);
}

void cadastrarConta() {
    Conta c;
    printf("\n--- Cadastro da Conta ---\n");
    printf("Digite o número da conta: ");
    scanf("%d", &c.numero);
    printf("Digite o titular: ");
    scanf("%49s", c.titular);
    printf("Digite o saldo: ");
    scanf("%f", &c.saldo);
    printf("Número: %d | Titular: %s | Saldo: %.2f\n", c.numero, c.titular, c.saldo);
}

void cadastrarEndereco() {
    Endereco e;
    printf("\n--- Cadastro do Endereço ---\n");
    printf("Digite a rua: ");
    scanf("%49s", e.rua);
    printf("Digite o número: ");
    scanf("%d", &e.numero);
    printf("Digite a cidade: ");
    scanf("%49s", e.cidade);
    printf("Rua: %s | Número: %d | Cidade: %s\n", e.rua, e.numero, e.cidade);
}

void cadastrarFilme() {
    Filme f;
    printf("\n--- Cadastro do Filme ---\n");
    printf("Digite o título: ");
    scanf("%99s", f.titulo);
    printf("Digite o gênero: ");
    scanf("%49s", f.genero);
    printf("Digite a duração (min): ");
    scanf("%d", &f.duracao);
    printf("Título: %s | Gênero: %s | Duração: %d min\n", f.titulo, f.genero, f.duracao);
}

void cadastrarAluno() {
    Aluno a;
    printf("\n--- Cadastro do Aluno ---\n");
    printf("Digite o ID: ");
    scanf("%d", &a.id);
    printf("Digite o nome: ");
    scanf("%49s", a.nome);
    printf("Digite a nota 1: ");
    scanf("%f", &a.nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &a.nota2);
    float media = (a.nota1 + a.nota2) / 2;
    printf("ID: %d | Nome: %s | Média: %.2f\n", a.id, a.nome, media);
}


int main() {
    int opcao;

    do {
        printf("\n------------ MENU -------------\n");
        printf("1 - Cadastrar Professor\n");
        printf("2 - Cadastrar Produto\n");
        printf("3 - Cadastrar Livro\n");
        printf("4 - Cadastrar Cliente\n");
        printf("5 - Cadastrar Funcionario\n");
        printf("6 - Cadastrar Carro\n");
        printf("7 - Cadastrar Conta\n");
        printf("8 - Cadastrar Endereco\n");
        printf("9 - Cadastrar Filme\n");
        printf("10 - Cadastrar Aluno\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarProfessor(); break;
            case 2: cadastrarProduto(); break;
            case 3: cadastrarLivro(); break;
            case 4: cadastrarCliente(); break;
            case 5: cadastrarFuncionario(); break;
            case 6: cadastrarCarro(); break;
            case 7: cadastrarConta(); break;
            case 8: cadastrarEndereco(); break;
            case 9: cadastrarFilme(); break;
            case 10: cadastrarAluno(); break;
            case 0: printf("\nSaindo do programa...\n"); break;
            default: printf("\nOpção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}
