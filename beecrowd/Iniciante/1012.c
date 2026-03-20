#include <stdio.h> // Area

int main() {
    double a, b, c, areatriangulo, areacirculo, areatrapezio, areaquadrado, arearetangulo;

    scanf("%lf %lf %lf", &a, &b, &c);

    areatriangulo = (a * c) / 2;
    areacirculo = 3.14159 * (c * c);
    areatrapezio = ((a + b) * c) / 2;
    areaquadrado = b * b;
    arearetangulo = a * b;

    printf("TRIANGULO: %.3lf\n", areatriangulo);
    printf("CIRCULO: %.3lf\n", areacirculo);
    printf("TRAPEZIO: %.3lf\n", areatrapezio);
    printf("QUADRADO: %.3lf\n", areaquadrado);
    printf("RETANGULO: %.3lf\n", arearetangulo);
}