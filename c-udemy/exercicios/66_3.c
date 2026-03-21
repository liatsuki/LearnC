#include <stdio.h>
#include <stdlib.h>

int main() {
    char texto[10];

    scanf("%s", texto);

    float temp = atof(texto);

    printf("Temperatura: %.1f\n", temp);

    if (temp < 18) {
        printf("O ambiente esta frio.\n");
    } else if (temp >= 18 && temp <= 26) {
        printf("O ambiente esta agradavel.\n");
    } else {
        printf("O ambiente esta quente.\n");
    }
}