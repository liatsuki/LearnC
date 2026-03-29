#include <stdio.h>
#include <stdlib.h>

int main () {
    int x = 10;     // variavel x
    int *p;         // ponteiro

    p = &x;         // ponteiro p aponta para a variavel x, vai receber o endereco

    printf("x = %d\n", x);        // variavel x
    printf("&x = %d\n", &x);      // endereco da variavel x
    printf("p = %d\n", p);        // o mesmo que &x, pq p = &x

    printf("\n");

    printf("x = %d\n", x);        // variavel x
    printf("p = %d\n", p);        // o mesmo que &x, pq p = &x
    printf("*p = %d\n", *p);      // valor guardado dentro do endereco para o p esta apontar

    printf("\n");

    printf("x = %d\n", x);
    *p = 12;                      // se quisermos, tambem da para modificar a variavel original (de forma indireta)
    printf("*p = %d\n", *p);
    printf("x = %d\n", x);
}