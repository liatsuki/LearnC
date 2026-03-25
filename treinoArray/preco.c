#include <stdio.h>

int main() {
    int preco[5], total = 0;

    for (int i = 0; i < 5; i++) {
        printf("Preco %d: ", i+1);
        scanf("%d", &preco[i]);

        total = total + preco[i];
    }

    printf("Total: %d", total);
}