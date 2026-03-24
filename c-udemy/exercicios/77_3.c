#include <stdio.h>
#include <stdlib.h>

int main() {
    char valor[4];

    printf("Temperatura: ");
    scanf("%s", valor);

    float temp = atof(valor);

    printf("\n");

    printf("%.1f\n", temp);

    if (temp < 18) {
        printf("Ambiente frio\n");
    } else if (temp >= 18 && temp <= 26) {
        printf("Ambiente agradavel\n");
    } else {
        printf("Ambiente quente\n");
    }
}