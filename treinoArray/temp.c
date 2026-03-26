#include <stdio.h>

int main () {
    int temp[4], maior, menor;

    for (int i = 0; i < 4; i++) {
        printf("Temperatura %d: ", i+1);
        scanf("%d", &temp[i]);
    }

    printf("\n");

    // Inicializar maior e menor
    maior = temp[0];
    menor = temp[0];

    for (int i = 1; i < 4; i++) {
        // encontrar o maior
        if (temp[i] > maior) {
            maior = temp[i];
        }

        // encontrar o menor
        if (temp[i] < menor) {
            menor = temp[i];
        }
    }
}