// 9 - Classificação do jogador baseada em idade e desempenho

#include <stdio.h>

int main() {
    int idade, golos;

    printf("Idade do Jogador: ");
    scanf("%d", &idade);

    printf("Golos do Jogador: ");
    scanf("%d", &golos);

    if (idade <= 20 && golos > 10) {
        printf("Jovem talento promissor!");
    } else if (idade <= 20 && golos <= 10) {
        printf("Jovem em desenvolvimento.");
    } else if (idade > 20 && golos >= 15) {
        printf("Jogador experiente em grande fase!");
    } else {
        printf("Estevão.");
    }

    return 0;
}