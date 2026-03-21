#include <stdio.h>

int prod(int a, int b) {
    int total;
    total = a * b;
    return total;
}

int main() {
    int a, b, resultado;

    scanf("%d", &a);
    scanf("%d", &b);

    resultado = prod(a,b);

    printf("PROD = %d\n", resultado);
}