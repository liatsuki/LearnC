#include <stdio.h>
#include <stdlib.h>
#include <time.h> // (time(NULL))

int main() {
    int numero = rand() % 100; // numero aleatorio - entre 0 e 99

    printf("Numero aleatorio: %d\n", numero);

    return 0;
}