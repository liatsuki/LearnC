#include <stdio.h>

int main() {
    int notas[3]; // notas[0], notas[1], notas[2]

    // loop de guardar
    // o i vai do 0 ate 2
    for (int i = 0; i < 3; i++) {

        // Mostra nota[1], nota[2], nota[3]
        // porque fiz i+1 para nao mostrar nota[0]
        printf("Nota %d: ", i+1); 
        scanf("%d", &notas[i]);
    }

    printf("\nAs notas sao:\n");

    // loop de mostrar
    for (int i = 0; i < 3; i++) {
        // i+1 para mostrar nota 1, nota 2 e nota 3
        printf("Nota %d: %d\n", i+1, notas[i]);
    }
}