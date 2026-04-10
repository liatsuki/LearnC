#include <stdio.h>

struct No {
    int valor;
    struct No *proximo;   // endereco do proximo no
};

int main() {
    struct No *primeiro = (struct No*) malloc(sizeof(struct No));

    primeiro->valor = 42;      // primeiro
    primeiro->proximo = NULL;  // ultimo

    printf("Valor do no: %d\n", primeiro->valor);
    printf("Valor do no: %s\n", primeiro->proximo);

    return 0;
}