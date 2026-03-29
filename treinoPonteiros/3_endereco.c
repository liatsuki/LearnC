#include <stdio.h>

int main() {
    int a = 29;
    int *p = &a;

    printf("Endereco de a: %p\n", &a);
    printf("Valor do ponteiro: %p\n", p);
}