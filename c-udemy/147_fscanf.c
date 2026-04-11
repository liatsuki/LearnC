#include <stdio.h>

int main() {

    FILE *arquivo;
    arquivo = fopen("nomes.txt", "r");
    char nome[100];

    // Se for NULL, significa que nao foi criado ou nao foi encontrado - feedback de erro
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while(fscanf(arquivo, "%s", nome) != EOF) {
        printf("Nome: %s\n", nome);
    }

    fclose(arquivo);

    return 0;
}