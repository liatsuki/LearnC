#include <stdio.h>

int main() {
    int num = 10;     // tou a guardar o valor
    int *p = &num;    // tou a guardar o endereco do valor

    printf("&num: %p\n", &num);
    printf("*p: %d\n", *p);
}