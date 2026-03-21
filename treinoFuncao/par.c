#include <stdio.h> // nao funciona

int par(int num) {
    if (num % 2 == 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num, resultado;

    scanf("%d", &num);

    resultado = par(num);

    if (num == 1) {
        printf("SIM");
    } else {
        printf("NAO");
    }

    printf("o %d e par? %d\n", num, resultado);
}