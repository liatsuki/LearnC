// Verificar se um numero e par ou impar.
// Crie uma funcao que receba um numero inteiro e
// retorne PAR se for par e IMPAR se for impar.

#include <stdio.h>

int parImpar (int num) {
    num = num % 2;

    if (num == 0) {
        printf("Numero PAR\n");
    } else {
        printf("Numero IMPAR\n");
    }

    return num;
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("%d", parImpar(num));

    return 0;
}