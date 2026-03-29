#include <stdio.h>

int main() {
    int b = 100;
    int *f = &b;

    printf("b = %d\n", b);
    *f = 200;
    printf("b = %d\n", b);
}