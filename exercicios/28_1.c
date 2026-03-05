// 1 - Cardapio Interativo

#include <stdio.h>

int main() {
    int opcao;

    printf("=== MENU === \n");
    printf("  1. Hamburguer\n");
    printf("  2. Cachorro-quente\n");
    printf("  3. Pizza\n");
    printf("  4 - Sair\n");

    printf("\nOpcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\n  Escolheu Hamburger.\n");
            break;
        case 2:
            printf("\n  Escolheu Cachorro-quente.\n");
            break;
        case 3:
            printf("\n  Escolheu Pizza.\n");
            break;
        case 4:
            printf("\n  Encerrando pedido...\n");
            break;
        default:
            printf("\n  Opcao Invalida!\n");
    }

    return 0;
}