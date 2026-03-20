// 4 - Numeros Pares de 1 a n

#include <stdio.h>

int main() {
    int n;

    printf("Numero: ");
    scanf("%d", &n);

    printf("Numeros pares de 1 ate %d: \n", n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}