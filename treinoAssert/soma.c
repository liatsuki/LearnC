#include <assert.h>
#include <stdio.h>

int soma(int a, int b) { // Soma
    return a + b;
}

void testar_soma() { // testes
// assert(soma(a, b) == a + b);
    assert(soma(2, 3) == 5);
    assert(soma(0, 0) == 0);
    assert(soma(-1, 1) == 0);
    assert(soma(-2, -3) == -5);
    assert(soma(2, 1) == 10); // Assertion failed: soma(2, 1) == 10, file soma.c, line 14
    printf("Ola Mundo!\n");
}

int main() {
    testar_soma(); // chamar a funcao dos testes
    return 0;
}