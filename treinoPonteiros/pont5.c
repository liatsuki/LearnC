#include <stdio.h>

int main() {
    int x = 5;
    int *p = &x;

    printf("x antes: %d\n", x);

    *p = 20;

    printf("x depois: %d\n", x);
}