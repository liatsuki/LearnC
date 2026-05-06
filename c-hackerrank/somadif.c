#include <stdio.h>

int main() {
    int num1, num2, soma1, dif1;
    float num3, num4, soma2, dif2;

    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &num3, &num4);

    soma1 = num1 + num2;
    dif1 = num1 - num2;

    soma2 = num3 + num4;
    dif2 = num3 - num4;

    printf("%d %d\n", soma1, dif1);
    printf("%.1f %.1f\n", soma2, dif2);

    return 0;
}