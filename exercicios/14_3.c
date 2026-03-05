// 3 - Conversão de Minutos para Tempo de Jogo

#include <stdio.h>

int main() {
    int totalMinutos, horas, min_restantes;

    printf("Tempo jogado em minutos: ");
    scanf("%d", &totalMinutos);

    horas = totalMinutos / 60;
    min_restantes = totalMinutos % 60;

    printf("\n  Conversao: %d horas e %d minutos\n", horas, min_restantes);

    return 0;
}