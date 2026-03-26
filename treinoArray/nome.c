#include <stdio.h>

int main () {
    char nome[3][15]; // 3 nomes, cada um com 15 letras

    for (int i = 0; i < 3; i++) {
        printf("Nome %d: ", i+1);
        scanf("%s", nome[i]);
    }

    printf("\n");

    printf("Os nomes sao:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nome %d: %s\n", i+1, nome[i]);
    }
}