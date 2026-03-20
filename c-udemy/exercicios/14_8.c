// 8 - Avaliar o desempenho do jogador

#include <stdio.h>

int main() {
    int golos;

    printf("Quantidade de golos marcados: ");
    scanf("%d", &golos);

    if(golos > 10) {
        printf("Excelente temporada!");
    } else if(golos >= 5) {             // (golos >= 5 && golos <= 10)
        printf("Boa temporada!");
    } else {
        printf("Temporada abaixo do esperado.");
    }

    return 0;
}