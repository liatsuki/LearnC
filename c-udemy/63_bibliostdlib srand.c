#include <stdio.h>
#include <stdlib.h>
#include <time.h> // (time(NULL))

int main() {
    srand(time(NULL));
    int numero = rand() % 100;

    printf("Numero aleatorio: %d\n", numero);

    return 0;
}