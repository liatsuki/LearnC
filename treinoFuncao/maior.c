#include <stdio.h>

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a, b, resultado;

    scanf("%d %d", &a, &b);

    resultado = maior(a,b);

    printf("MAIOR: %d\n", resultado);
}