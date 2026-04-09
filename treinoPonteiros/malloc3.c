#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Tamanho: ");
    scanf("%d", &n);

    int* valor = malloc(n * sizeof(int));

    if (valor == NULL) {
        printf("Erro: sem memoria\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &valor[i]);
    }

    printf("\n=== Valores guardados ===\n");

    for (int i = 0; i < n; i++) {
        printf("Valor %d = %d\n", i+1, valor[i]);
    }

    free(valor);

    return 0;
}