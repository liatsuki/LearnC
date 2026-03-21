#include <stdio.h>
#include <stdlib.h>

int main() {
    char texto[] = "123";

    int valor = atoi(texto);

    printf("Convertido: %d\n", valor + 2);

    return 0;
}