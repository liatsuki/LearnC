#include <stdio.h>

int main() {
    char caractere, sequencia[50], frase[50];

    scanf("%c", &caractere);
    scanf("%s", sequencia);
    scanf(" %[^\n]%*c", frase);

    printf("%c\n", caractere);
    printf("%s\n", sequencia);
    printf("%s\n", frase);

    return 0;
}