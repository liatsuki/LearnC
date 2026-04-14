#include <stdio.h>
#include <string.h>

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
    getchar();

    printf("Titulo: ");
    fgets(livros[total_livros].titulo, 100, stdin); // ler frases com espacos
    livros[total_livros].titulo[strcspn(livros[total_livros].titulo, "\n")] = '\0';

    printf("Autor: ");
    fgets(livros[total_livros].autor, 50, stdin);
    livros[total_livros].autor[strcspn(livros[total_livros].autor, "\n")] = '\0';

    printf("Quantidade Total: ");
    scanf("%d", &livros[total_livros].quant_total);

    livros[total_livros].codigo = total_livros + 1; // codigo gerado automaticamente

    livros[total_livros].quant_disp = livros[total_livros].quant_total;

    total_livros++;
}

void cadastrar_utilizador() {
    getchar();

    users[total_users].codigo = total_users + 1;  // codigo gerado automaticamente

    printf("Nome: ");
    fgets(users[total_users].nome, 50, stdin);
    users[total_users].nome[strcspn(users[total_users].nome, "\n")] = '\0';

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

    getchar();

    for (int i = 0; i < total_livros; i++) {

        if (livros[i].codigo == cod_livro  && livros[i].quant_disp > 0) {
            printf("Livro disponivel para emprestimo.\n");

            int cod_user;
            printf("Codigo do utilizador: ");
            scanf("%d", &cod_user);

            for (int j = 0; j < total_users; j++) {
                if (users[j].codigo == cod_user) {
                    emp[total_emp].cod_livro = cod_livro;
                    emp[total_emp].cod_user  = cod_user;
                    emp[total_emp].devolucao = 0;  // 0 = em andamento
                    total_emp++;
                    livros[i].quant_disp--;  // diminui a quantidade disponível
                    printf("Emprestimo registado com sucesso!\n");
                    break;
                }
            }

        } 
    }
}

void registar_devolucao() {
    int cod_livro;
    printf("Codigo do livro:");
    scanf("%d", &cod_livro);

    int cod_users;
    printf("Codigo do utilizador:");
    scanf("%d", &cod_users);

    for (int i = 0; i < total_emp; i++) {
        if (emp[i].cod_livro == cod_livro && emp[i].cod_user == cod_users && emp[i].devolucao == 0) {
            emp[i].devolucao = 1;
            for (int j = 0; j < total_livros; j++) {
                if (livros[j].codigo == cod_livro) {
                    livros[j].quant_disp++;
                }
            }
            printf("Devolucao registada com sucesso!\n");
        }
    }
}

void exibir_emprestimos_andamento() {
    printf("\n=== EMPRESTIMOS ===\n");

    // printf("Total emprestimos: %d\n", total_emp);

    for (int i = 0; i < total_emp; i++) {
        if(emp[i].devolucao == 0) {
            printf("Codigo do livro: %d | Codigo do utilizador: %d\n", 
            emp[i].cod_livro,
            emp[i].cod_user);
        }
    }
}

void salvar_dados() {
    FILE *f_livros, *f_users, *f_emprestimos;
    f_livros = fopen("livros.txt", "w");
    f_users = fopen("utilizadores.txt", "w");
    f_emprestimos = fopen("emprestimos.txt", "w");

    if (f_livros == NULL) {
        printf("Erro ao abrir o arquivo 'livros.txt'.\n");
        return;
    }

    if (f_users == NULL) {
        printf("Erro ao abrir o arquivo 'utilizadores.txt'.\n");
        return;
    }

    if (f_emprestimos == NULL) {
        printf("Erro ao abrir o arquivo 'emprestimos.txt'.\n");
        return;
    }

    for (int i = 0; i < total_livros; i++) {
        fprintf(f_livros, "%d|%s|%s|%d|%d\n", 
            livros[i].codigo,
            livros[i].titulo,
            livros[i].autor,
            livros[i].quant_total,
            livros[i].quant_disp);
    }

    for (int i = 0; i < total_users; i++) {
        fprintf(f_users, "%d|%s|%d\n", 
            users[i].codigo,
            users[i].nome,
            users[i].idade);
    }

    for (int i = 0; i < total_emp; i++) {
        fprintf(f_emprestimos, "%d|%d|%d\n", 
            emp[i].cod_livro,
            emp[i].cod_user,
            emp[i].devolucao);
    }

    fclose(f_livros);
    fclose(f_users);
    fclose(f_emprestimos);

    return;
}

void carregar_dados() {
    FILE *f_livros, *f_users, *f_emprestimos;
    f_livros = fopen("livros.txt", "r");
    f_users = fopen("utilizadores.txt", "r");
    f_emprestimos = fopen("emprestimos.txt", "r");

    if (f_livros == NULL) {
        printf("Erro ao abrir o arquivo 'livros.txt'.\n");
        return;
    }

    if (f_users == NULL) {
        printf("Erro ao abrir o arquivo 'utilizadores.txt'.\n");
        return;
    }

    if (f_emprestimos == NULL) {
        printf("Erro ao abrir o arquivo 'emprestimos.txt'.\n");
        return;
    }

    while (fscanf(f_livros, "%d|%[^|]|%[^|]|%d|%d\n", 
            &livros[total_livros].codigo,
            livros[total_livros].titulo,
            livros[total_livros].autor,
            &livros[total_livros].quant_total,
            &livros[total_livros].quant_disp) == 5) {

                total_livros++;
    }

    while (fscanf(f_users, "%d|%[^|]|%d\n", 
            &users[total_users].codigo,
            users[total_users].nome,
            &users[total_users].idade) == 3) {

                total_users++;
    }

    while (fscanf(f_emprestimos, "%d|%d|%d\n", 
            &emp[total_emp].cod_livro,
            &emp[total_emp].cod_user,
            &emp[total_emp].devolucao) == 3) {

                total_emp++;
    }

    fclose(f_livros);
    fclose(f_users);
    fclose(f_emprestimos);
}

void menu() {
    int opcao;

    carregar_dados();

    do {
        printf("\n=== MENU Biblioteca ===\n");
        printf("1. Cadastrar livro\n");
        printf("2. Exibir livros\n");
        printf("3. Cadastrar utilizador\n");
        printf("4. Exibir utilizadores\n");
        printf("5. Registar emprestimo\n");
        printf("6. Registar devolucao\n");
        printf("7. Exibir emprestimos em andamento\n");
        printf("0. Sair\n");
        printf("=======================\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar_livro();
                break;
            case 2:
                exibir_livros();
                break;
            case 3:
                cadastrar_utilizador();
                break;
            case 4:
                exibir_utilizadores();
                break;
            case 5:
                registar_emprestimo();
                break;
            case 6:
                registar_devolucao();
                break;
            case 7:
                exibir_emprestimos_andamento();
                break;
            case 0:
                salvar_dados();
                printf("\n  Encerrando o programa...\n\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
}

int main() {
    menu();
    return 0;
}

// Sugestao de Resposta:
// https://github.com/oguscaetano/curso-log-prog-c/blob/main/projeto-1.c */