#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, soma = 0;

    printf("m: ");
    scanf("%d", &m);

    printf("n: ");
    scanf("%d", &n);

    int** matriz = malloc(m * sizeof(int*));

    if (matriz == NULL) {
        printf("Erro: sem memoria\n");
        return 1;
    }

    for (int i = 0; i < m; i++) {
        matriz[i] = malloc(n * sizeof(int));
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n=== MATRIZ ===\n");

    for (int i = 0; i < m; i++) {
        soma = 0;
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);

            soma += matriz[i][j];
        }
        printf(" = %d\n", soma);
    }

    for (int i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}