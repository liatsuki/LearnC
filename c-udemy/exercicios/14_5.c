// 5 - Diferença de Salários entre jogadores

#include <stdio.h>
#include <math.h> // biblioteca de matemática

int main() {
    float salario1, salario2, dif;

    printf("Salario do Jogador 1: ");
    scanf("%f", &salario1);

    printf("Salario do Jogador 2: ");
    scanf("%f", &salario2);

    dif = fabs(salario1 - salario2);
    // dif = salario1 - salario2; -> forma simples

    printf("\n  Diferenca de Salarios: %.2f euros\n", dif);

    return 0;
}