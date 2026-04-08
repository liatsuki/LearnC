#include <stdio.h>

int dobrar(int a) {
    int resultado;
    resultado = a * 2;
    return resultado;
}

int main() {
    int num, total;

    printf("Numero: ");
    scanf("%d", &num);

    total = sobrar(num);

    printf("Nnumero depois: %d", total);
}