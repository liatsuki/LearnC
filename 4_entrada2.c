#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("MAIOR");
    } else {
        printf("MENOR");
    }

    return 0;
}