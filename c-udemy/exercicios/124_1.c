#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa p1, p2, p3;

    printf("\n-> Usar (.) para numero decimal.\n\n");

    printf("=== Pessoa 1 ===\n");
    printf("Nome P1: ");
    scanf("%s", p1.nome);
    printf("Idade P1: ");
    scanf("%d", &p1.idade);
    printf("Altura P1: ");
    scanf("%f", &p1.altura);

    printf("\n");

    printf("=== Pessoa 2 ===\n");
    printf("Nome P2: ");
    scanf("%s", p2.nome);
    printf("Idade P2: ");
    scanf("%d", &p2.idade);
    printf("Altura P2: ");
    scanf("%f", &p2.altura);

    printf("\n");

    printf("=== Pessoa 3 ===\n");
    printf("Nome P3: ");
    scanf("%s", p3.nome);
    printf("Idade P3: ");
    scanf("%d", &p3.idade);
    printf("Altura P3: ");
    scanf("%f", &p3.altura);

    // Encontrar a mais velha
    struct Pessoa maisVelha = p1;

    if (p2.idade > maisVelha.idade)
        maisVelha = p2;

    if (p3.idade > maisVelha.idade)
        maisVelha = p3;

    printf("\n=== Dados da pessoa mais velha ===\n");
    printf("Nome: %s\n", maisVelha.nome);
    printf("Idade: %d\n", maisVelha.idade);
    printf("Altura: %.2f\n", maisVelha.altura);

    return 0;
}