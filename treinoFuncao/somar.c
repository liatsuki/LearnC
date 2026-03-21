#include <stdio.h>

int somar(int a, int b) {
    int resultado;
    resultado = a + b;
    return resultado;
}

int main() {
    int a, b, total;

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    total = somar(a,b);

    printf("%d + %d = %d\n", a, b, total);
}