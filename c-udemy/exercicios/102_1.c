#include <stdio.h>

int soma (int *c, int *d) {
    int resultado;
    resultado = *c + *d;
    return resultado;
}

int main() {
    int a, b, total;
    int *c = &a, *d = &b;

    printf("A: ");
    scanf("%d", &a);

    printf("B: ");
    scanf("%d", &b);

    total = soma(c,d);

    printf("Soma = %d\n", total);

    return 0;
}