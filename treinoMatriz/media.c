#include <stdio.h>

int main() {
    int num[2][3], soma = 0;
    float media = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Numero (%d/%d): ", i+1, j+1);
            scanf("%d", &num[i][j]);

            soma += num[i][j];
        }
        printf("\n");
    }
    
    media = soma / 6.0;

    printf("\nMedia: %.2f\n", media);
}