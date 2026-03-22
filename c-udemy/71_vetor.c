#include <stdio.h>

int main() {
    int notas[5] = {10, 32, 9, 2, 3};   // 0 1 2 3 4

    /*
    printf("%d\n", notas[0]);  // 0 = 10
    printf("%d\n", notas[1]);  // 0 = 32
    printf("%d\n", notas[2]);  // 0 = 9
    printf("%d\n", notas[3]);  // 0 = 2
    printf("%d\n", notas[4]);  // 0 = 3
    */


    // Para simplicar, faz-se um loop:
    for (int i = 0; i < 5; i++) {
        printf("%d\n", notas[i]);  // i = indice
    }

    return 0;
}