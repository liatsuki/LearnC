#include <stdio.h>

int main() {
    float a, b, divisao;

    scanf("%d", &a);
    scanf("%d", &b);

    divisao = a / b;

    printf("%.2f", divisao);

    return 0;
}