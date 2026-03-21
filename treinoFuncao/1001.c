#include <stdio.h>

double area(int raio) {
    double total, pi = 3.14159;
    total = pi * (raio*raio);
    return total;
}

int main() {
    double raio, resultado;
    scanf("%lf", &raio);
    resultado = area(raio);
    printf("A=%.4lf\n", resultado);
}