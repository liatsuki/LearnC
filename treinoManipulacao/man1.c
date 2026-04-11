#include <stdio.h>

int main() {
    
    FILE *arquivo;
    arquivo = fopen("ola.txt", "w");

    fclose(arquivo);

    return 0;
}