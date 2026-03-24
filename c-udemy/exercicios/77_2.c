#include <stdio.h>
#include <stdlib.h>

int main() {
    char texto[3];

    printf("Idade: ");
    scanf("%s", texto);

    int idade = atoi(texto);

    printf("\n");

    printf("Idade = %d\n", idade);

    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    return 0;
}