#include <stdio.h>

int main() {
    int a = 3;
    int *p = &a;

    printf("variavel = %d\n", a);
    printf("endereco = %p\n", p);
    printf("ponteiro = %d\n", *p);

    return 0;
}