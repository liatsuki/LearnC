#include <stdio.h>
#include <stdlib.h>

int main() {
    char texto[4];

    scanf("%s", texto);

    int idade = atoi(texto);

    printf("Idade: %d\n", idade);

    if (idade >= 18) {
        printf("A pessoa e maior de idade.\n");
    } else {
        printf("A pessoa e menor de idade.\n");
    }
}