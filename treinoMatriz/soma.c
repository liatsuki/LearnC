#include <stdio.h>

int main() {
    int valor[2][3], soma = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Numero (%d/%d): ", i+1, j+1);
            scanf("%d", &valor[i][j]);

            soma += valor[i][j];
        }
        printf("\n");
    }

    printf("Soma de todos os elementos: %d\n", soma);
}