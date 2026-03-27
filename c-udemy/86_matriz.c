#include <stdio.h>

int main() {
    int notas[3][2];  // matriz 3x2 - 3 linhas, 2 colunas

    // guardar os dados para a matriz
    for (int i = 0; i < 3; i++) {        // linhas
        for (int j = 0; j < 2; j++) {    // colunas
            printf("Digite a nota do aluno %d, prova %d: ", i+1, j+1);
            scanf("%d", &notas[i][j]);
        }
        printf("\n");
    }

    // mostrar os dados da matriz
    printf("=== NOTAS ===\n");

    for (int i = 0; i < 3; i++) {        // linhas

        printf("Aluno %d: ", i+1);

        for (int j = 0; j < 2; j++) {    // colunas
            printf("%d ", notas[i][j]);
        }

        printf("\n");
    }


    return 0;
}