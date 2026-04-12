#include <stdio.h>

#define MAX_LIVROS 100
#define MAX_USERS 100
#define MAX_EMPRESTIMOS 100

struct livro {
    int codigo;
    char titulo[100];
    char autor[50];
    int quant_total;
    int quant_disp;
};

struct utilizador {
    int codigo;
    char nome[50];
    int idade;
};

struct emprestimo {
    int cod_livro;
    int cod_user;
    int devolucao; // (0 NAO DEVOLVIDO, 1 DEVOLVIDO)
};

int total_livros = 0;
int total_users = 0;
int total_emp = 0;

struct livro livros[MAX_LIVROS];
struct utilizador users[MAX_USERS];
struct emprestimo emp[MAX_EMPRESTIMOS];

void cadastrar_livro() {
    printf("Titulo: ");
    fgets(livros[total_livros].titulo, 100, stdin); // ler frases com espacos

    printf("Autor: ");
    fgets(livros[total_livros].autor, 50, stdin);

    printf("Quantidade Total: ");
    scanf("%d", &livros[total_livros].quant_total);

    livros[total_livros].codigo = total_livros + 1; // codigo gerado automaticamente

    livros[total_livros].quant_disp = livros[total_livros].quant_total;

    total_livros++;
}

void cadastrar_utilizador() {
    users[total_users].codigo = total_users + 1;  // codigo gerado automaticamente

    printf("Nome: ");
    fgets(users[total_users].nome, 50, stdin);

    printf("Idade: ");
    scanf("%d", &users[total_users].idade);

    total_users++;
}

void exibir_livros() {
    printf("\n=== LIVROS ===\n");

    for (int i = 0; i < total_livros; i++) {
        printf("Codigo do livro: %d | Titulo: %s | Autor: %s | Quantidade total: %d | Quantidade disponivel: %d\n", 
            livros[i].codigo, 
            livros[i].titulo, 
            livros[i].autor, 
            livros[i].quant_total,
            livros[i].quant_disp);
    }
}

void exibir_utilizadores() {
    printf("\n=== Utilizadores ===\n");

    for (int i = 0; i < total_users; i++) {
        printf("Codigo do utilizador: %d | Nome: %s | Idade: %d\n", 
            users[i].codigo,
            users[i].nome,
            users[i].idade);
    }
}

void registar_emprestimo() {
    int cod_livro;
    printf("Codigo do livro:");
    scanf("%d", &cod_livro);

    for (int i = 0; i < total_livros; i++) {

        if (livros[i].codigo == cod_livro  && livros[i].quant_disp > 0) {
            printf("Livro disponivel para emprestimo.\n");

            int cod_user;
            printf("Codigo do utilizador: ");
            scanf("%d", &cod_user);

            for (int j = 0; j < total_users; j++) {
                if (users[j].codigo == cod_user) {
                    // utilizador existe! regista o emprestimo
                }
            }

        } else {
            printf("Livro nao disponivel ou nao existe.\n");
        }
    }
}

void salvar_dados() {
    
}

int main() {

}