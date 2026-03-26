#include <stdio.h>

int main() {
    char nome[4][20];
    
    for (int i = 0; i < 4; i++) {
        printf("Nome %d: ", i+1);
        scanf("%s", nome[i]);
    }

    printf("\n");

    printf("Ordem inversa:\n");

    for (int i = 3; i >= 0; i--) {
        printf("%s\n", nome[i]);
    }
}