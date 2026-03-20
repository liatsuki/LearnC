#include <stdio.h>

int main() {
    int dias, i;

    printf("Dias de treino: ");
    scanf("%d", &dias);

    for (i = 1; i <= dias; i++) {
        printf("Dia %d: Ta pago!\n", i);
    }

    printf("\nTreino concluido!\n");

    return 0;
}