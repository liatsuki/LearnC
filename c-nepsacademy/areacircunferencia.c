#include <stdio.h>

int main() {
    double raio, pi = 3.1416, area;

    scanf("%f", &raio);

    area = pi * (raio*raio);

    printf("%.2f\n", area);

    return 0;
}