#include <stdio.h>

int compAtaque (int dano[]) {
    int maior = dano[0];
    for (int i = 1; i < 4; i++) {
        if (dano[i] > maior) {
            maior = dano[i];
        }
    }
    return maior;
}

int main() {
    int dano[4], maior;

    printf("Digite o dano de 4 ataques:\n\n");

    for (int i = 0; i < 4; i++) {
        printf("Ataque %d: ", i+1);
        scanf("%d", &dano[i]);
    }

    printf("\n");

    maior = compAtaque(dano);

    printf("Maior dado causado: %d\n", maior);
}