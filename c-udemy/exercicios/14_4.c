// 4 - Calculando o Aproveitamento de um Time

#include <stdio.h>

int main() {
    int vitoria, empate, derrota, total_pontos;

    printf("Numero de vitorias: ");
    scanf("%d", &vitoria);

    printf("Numero de empates: ");
    scanf("%d", &empate);

    printf("Numero de derrotas: ");
    scanf("%d", &derrota);

    total_pontos = (vitoria * 3) + (empate * 1) + (derrota * 0);

    printf("\n  Numero total de pontos: %d\n", total_pontos);
    
}