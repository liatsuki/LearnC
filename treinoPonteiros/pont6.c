#include <stdio.h>

int main() {
    float a = 2.54, b = 4.11;
    float *p = &a;

    printf("a: %.2f\n", *p);

    p = &b;

    printf("b: %.2f\n", *p);
}