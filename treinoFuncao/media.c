#include <stdio.h> // nao sei se ta certo

float media(int a, int b, int c) {
    float media;
    media = (a + b + c) / 3;
    return media;
}

int main() {
    int a, b, c, resultado;

    scanf("%d %d %d", &a, &b, &c);

    resultado = media(a,b,c);

    printf("MEDIA = %f\n", resultado);
}