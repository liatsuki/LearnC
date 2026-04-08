#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;

    printf("Variavel antes = %d\n", a);
    *p = 99;
    printf("Variavel depois = %d\n", a);
}