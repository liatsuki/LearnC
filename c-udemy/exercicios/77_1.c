#include <stdio.h>

int main() {
    int fps[6], soma = 0;
    float media;

    printf("Digite os FPS registados em 6 momentos: ");

    printf("\n\n");

    for (int i = 0; i < 6; i++) {
        printf("Momento %d: ", i + 1);
        scanf("%d", &fps[i]);

        soma += fps[i];
        media = soma / 6;
    }

    printf("\n\n");

    printf("Media de FPS: %.2f\n", media);
}