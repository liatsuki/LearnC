#include <stdio.h>
#include <stdlib.h>

int main() {
    int* p = malloc(sizeof(int));   // reserva 4 bytes (int vale 4)
    *p = 7;                         // escreve 7 no espaco que o malloc reservou

    printf("%d\n", *p);             // o * vai buscar o valor que esta no endereco guardado no p

    free(p);                        // devolve memoria ao sistema
}