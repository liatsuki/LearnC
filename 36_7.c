// 7 - Piramide de Numeros Pares

#include <stdio.h>

int main() {
    int n, par = 2;

    printf("Numero linhas da piramide: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {           // linhas

        for (int j = 1; j <= i; j++) {       // colunas
            printf("%d ", par);
            par = par + 2;
        }

        printf("\n");
    }

}