// 2 - Média de Golos por Partida

#include <stdio.h>

int main() {
    int golos, partidas;
    float media;

    printf("Numero total de golos: ");
    scanf("%d", &golos);

    printf("Quantidade de partidas jogadas: ");
    scanf("%d", &partidas);

    media = (float)golos / partidas;

    printf("\n   Media: %.2f golos por partida\n", media);

    return 0;
}