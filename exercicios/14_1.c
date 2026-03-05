// 1 - Apresentação do Jogador

#include <stdio.h>

int main() {
    char nome[20];
    int idade, golos;

    printf("Digite o nome do jogador: ");
    scanf("%s", &nome);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a quantidade de golos: ");
    scanf("%d", &golos);

    printf("\n=================================\n");

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Golos: %d\n", golos);

    return 0;
}