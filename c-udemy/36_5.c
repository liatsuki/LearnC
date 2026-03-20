#include <stdio.h>

int main() {
    int n;

    printf("Numero linhas do triangulo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {           // linhas

        for (int j = 1; j <= i; j++) {       // colunas
            printf("%d ", j);
        }

        printf("\n");
    }

}