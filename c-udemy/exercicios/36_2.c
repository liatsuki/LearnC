// 2 - Soma dos numeros de 1 a n

#include <stdio.h>

int main() {
    int n, soma=0;

    printf("Numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma = soma + i;               // juntar a soma antiga com i
    }

    printf("\nA soma de 1 ate %d e: %d", n, soma);

    return 0;
}