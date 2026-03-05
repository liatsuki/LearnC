// 10 - Classificação do nivel da partida com base na quantidade de torcedores

#include <stdio.h>

int main() {
    int estadio, torcedores;
    float ocupacao;

    printf("Capacidade total do estadio: ");
    scanf("%d", &estadio);

    printf("Quantidade de torcedores presentes no jogo: ");
    scanf("%d", &torcedores);

    ocupacao = (float)torcedores / estadio * 100;

    printf("\n  === RESULTADO ===\n");

    printf("  Lotacao: %.2f%%\n", ocupacao);

    if(ocupacao > 90) {
        printf("  Lotado!\n");
    } else if(ocupacao >= 70) {
        printf("  Otima presenca de publico!\n");
    } else if(ocupacao >= 50) {
        printf("  Publico razoavel.\n");
    } else {
        printf("  Morumbis.\n");
    }

    return 0;
}