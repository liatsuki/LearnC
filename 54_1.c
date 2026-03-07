#include <stdio.h>

float media(float nota1, float nota2) {
    float media;
    media = (nota1 + nota2) / 2;
    return media;
}

int main() {
    float nota1, nota2;

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Media: %.2f\n", media(nota1, nota2));
}