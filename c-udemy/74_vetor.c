#include <stdio.h>

int main() {
    char nomes[3][20];

    // Loop de capturar os nomes
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    printf("\n");

    // Loop para mostrar os nomes
    for (int i = 0; i < 3; i++) {
        printf("Nome %d: %s\n", i + 1, nomes[i]);
    }

    return 0;
}