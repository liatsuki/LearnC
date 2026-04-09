#include <stdio.h>
#include <stdlib.h>

int main() {
    int* valor = malloc(3 * sizeof(int));

    if (valor == NULL) {
        printf("Erro: sem memoria\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        valor[i] = (i+1) * 10;
    }

    for (int i = 0; i < 3; i++) {
        printf("%d\n", valor[i]);
    }

    free(valor);
    
    return 0;
}