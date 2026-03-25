#include <stdio.h>

int main() {
    char nome[3][20];
    int idade[3];

    for (int i = 0; i < 3; i++) {
        printf("Nome %d: ", i+1);
        scanf("%s", nome[i]);

        printf("Idade %d: ", i+1);
        scanf("%d", &idade[i]);

    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%s tem %d\n", nome[i], idade[i]);
    }
}