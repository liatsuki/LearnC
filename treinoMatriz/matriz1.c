#include <stdio.h>

int main() {
     int valor[2][2];

     for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Numero (%d/%d): ", i+1, j+1);
            scanf("%d", &valor[i][j]);
        }
     }

     printf("\n=== Exibicao dos valores ===\n");

     for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", valor[i][j]);
        }
        printf("\n");
     }
}   