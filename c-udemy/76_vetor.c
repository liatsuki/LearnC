#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int euromilhoes[6];
    int fezinha[6] = {3, 12, 23, 55, 10, 42};
    int contador = 0;  // o numero de quantos numeros acertou

    srand(time(NULL));

    printf("=== Numeros do Euromilhoes! ===\n");
    // gerar numeros aleatorios do 1 ate 60 
    for (int i = 0; i < 6; i++) {
        euromilhoes[i] = rand() % 60 + 1;
        printf("%d ", euromilhoes[i]);
    }

    printf("\n\n=== Fezinha! ===\n");
    // gerar numeros aleatorios do 1 ate 60 
    for (int i = 0; i < 6; i++) {
        printf("%d ", fezinha[i]);
    }

    printf("\n\n=== Resultados ===\n");

    // comparar os numeros entre a fezinha e o euromilhoes
    for (int i = 0; i < 6; i++) {       // fezinha
        for (int j = 0; j < 6; j++) {   // euromilhoes
            if (euromilhoes[j] == fezinha[i]) {  // se ganhar algum numero
                printf("%d ", fezinha[i]);
                contador++;
            }
        } 
    }

    printf("\n\nTotal de acertos: %d\n", contador);

    return 0;
}