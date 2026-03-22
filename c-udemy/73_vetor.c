#include <stdio.h>

int main() {
    char texto[3][20] = {"lidia", "maria", "duarte"};

    printf(" %s\n", texto[0]);  // lidia
    printf(" %s\n", texto[1]);  // maria
    printf(" %s\n", texto[2]);  // duarte

    printf(" %c\n", texto[0][0]);  // Pegar letra "l"

    return 0;
}

// texto[quantidade de elementos][numero de caracteres dentro do elemento]

/*
posicao 0 = lidia
posicao 1 = maria
posicao 2 = duarte
*/