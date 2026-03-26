#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][20], letra;

    for (int i = 0; i < 5; i++) {
        printf("Nome %d: ", i+1);
        scanf("%s", nomes[i]);
    }

    printf("Letra: ");
    scanf(" %c", &letra);

    for (int i = 0; i < 5; i++) {
        if (strchr(nomes[i], letra) != NULL) {  // strchr procura o caracter | NULL - nada, nao encontrou
            printf("%s\n", nomes[i]);
        }
    }
}