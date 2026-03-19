#include <stdio.h>

void avaliarNota(int nota) {
    if (nota >= 6) {
        printf("Aprovado\n");
    } else if (nota >= 4 && nota < 6) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
}

int main () {
    int nota;

    printf("Nota do aluno: ");
    scanf("%d", &nota);

    printf("Avaliacao: ");
    avaliarNota(nota);
}