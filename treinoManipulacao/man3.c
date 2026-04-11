#include <stdio.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("ola.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fprintf(arquivo, "Ola mundo!\n");

    fclose(arquivo);

    return 0;
}