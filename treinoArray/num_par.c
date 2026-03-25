#include <stdio.h>

int main() {
    int num[5], resultado = 0;

    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0) {
            resultado++;
        }
    }

    printf("\nPares: %d", resultado);

}