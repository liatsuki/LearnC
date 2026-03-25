#include <stdio.h>

int main() {
    int idade[3];

    for (int i = 0; i < 3; i++) {
        printf("Idade %d: ", i+1);
        scanf("%d", &idade[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d tem %d anos\n", i+1, idade[i]);
    }
}