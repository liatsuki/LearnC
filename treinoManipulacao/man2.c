#include <stdio.h>

int main() {

    FILE *arquivo;
    arquivo = fopen("naoexiste.txt", "r");

    if (arquivo == NULL) {
        printf("ERRO\n");
        return 1;
    } else {
        printf("Aberto com sucesso!\n");
    }

    return 0;
}