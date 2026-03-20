#include <stdio.h>

int main() {
    int num;

    do {
        printf("Numero secreto (entre 1 e 10): ");
        scanf("%d", &num);
    } while (num != 7);     // o loop continua enquanto o utilizador errar no numero

    printf("Voce acertou!\n");
}