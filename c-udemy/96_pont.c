#include <stdio.h>

    void aumenta(int *n) {
        (*n)++;
    }

int main() {
    int numero = 5;

    // Funcao
    aumenta(&numero); // &numero -> endereco da variavel numero

    printf("%d\n", numero);

    return 0;
}