#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // inicializa a semente

    int num1 = rand() % 61;
    int num2 = rand() % 61;
    int num3 = rand() % 61;
    int num4 = rand() % 61;
    int num5 = rand() % 61;
    int num6 = rand() % 61;

    printf("Euromilhoes: %d %d %d %d %d %d\n", num1, num2, num3, num4, num5, num6);
    return 0;
}

