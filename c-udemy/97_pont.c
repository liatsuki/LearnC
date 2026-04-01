#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;   // a variavel 'temp' guarda o 10 do 'a'
    *a = *b;         // *a = 20
    *b = temp;       // *b = 10
}

int main() {
    int x = 10, y = 20;
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    troca(&x, &y);
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    return 0;
}