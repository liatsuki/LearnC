#include <stdio.h>

int main() {
    int notas[4];

    for (int i = 0; i < 4; i++) {
        printf("Nota %d: ", i+1);
        scanf("%d", &notas[i]);
    }

    printf("\n");

    for (int i = 0; i < 4; i++) {
        if (notas[i] >= 10) {
            printf("Nota %d: Positiva\n", i+1);
        } else {
            printf("Nota %d: Negativa\n", i+1);
        }
    }
}