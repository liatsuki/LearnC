#include <stdio.h>

int sub(int a, int b){
    int total;
    total = a - b;
    return total;
}

int main() {
    int x, y, resultado;

    scanf("%d %d", &x, &y);

    resultado = sub(x,y);

    printf("= %d\n", resultado);
}