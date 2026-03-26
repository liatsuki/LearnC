#include <stdio.h>

int main() {
    int num[10], pares[10], contador = 0;

    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (num[i] % 2 == 0) {
            pares[contador] = num[i];
            contador++;
        }
    }

    for (int i = 0; i < contador; i++) {
        printf("%d\n", pares[i]);
    }
}