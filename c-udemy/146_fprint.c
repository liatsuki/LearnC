#include <stdio.h>

int main() {

    FILE *arquivo;
    arquivo = fopen("nomes.txt", "w");

    // Se for NULL, significa que nao foi criado ou nao foi encontrado - feedback de erro
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fprintf(arquivo, "Lidia \n");
    fprintf(arquivo, "Maria \n");

    fclose(arquivo);

    return 0;
}