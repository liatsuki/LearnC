#include <stdio.h>

int main() {
    int matriz[4][4], soma = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        soma += matriz[i][i];  // i==j sempre!
    }

    printf("Soma da diagonal: %d\n", soma);

}