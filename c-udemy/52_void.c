#include <stdio.h>

// Funcao que mostra um menu (nao retorna nada)
void exibirMenu() {
    printf("=== MENU DE OPCOES ===\n");
    printf("1 - Ver saldo\n");
    printf("2 - Fazer deposito\n");
    printf("3 - Fazer saque\n");
    printf("4 - Sair\n");
    printf("======================\n");
}

int main() {
    // Chamada da funcao
    exibirMenu();

    int opcao;
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Voce escolheu a opcao %d.\n", opcao);

    return 0;
}