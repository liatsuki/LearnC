// 6 - Triangulo invertido de número

#include <stdio.h>

int main() {
    int n;

    printf("Numero linhas do triangulo: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {           // linhas

        for (int j = 1; j <= i; j++) {       // colunas
            printf("%d ", j);
        }

        printf("\n");
    }

}