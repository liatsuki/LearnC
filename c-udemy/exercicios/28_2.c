// 2 - Verificação de Nota e Frequencia para Aprovoação

#include <stdio.h>

int main() {
    int opcao, nota, freq;

    printf("=== Avaliacao Escolar ===\n");
    printf("  1. Verificar se o aluno foi aprovado\n");
    printf("  2. Sair\n");

    printf("\nOpcao escolhida: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nNota final (0 a 10): ");
            scanf("%d", &nota);

            printf("Frequencia (0 a 100): ");
            scanf("%d", &freq);

            if (nota >= 7 && freq >= 75) {
                printf("\n  Aprovado!\n");
            } else {
                printf("\n  Reprovado!\n");
            }
            break;
        case 2:
            printf("\n  Encerrar programa...\n");
            break;
        default:
            printf("\n  Opcao invalida!\n");
    }

    return 0;
}