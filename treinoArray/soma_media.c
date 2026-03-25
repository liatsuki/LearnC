#include <stdio.h>

int main() {
    int num[4], soma = 0, media; // num[0] num[1] num[2] num[3]

    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &num[i]);

        soma += num[i];
        media = soma / 5;
    }

    printf("\nSoma: %d\n", soma);
    printf("Media: %d\n", media);
}