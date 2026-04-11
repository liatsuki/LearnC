#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE *arquivo;
    arquivo = fopen("dados.txt", "r");

    system("nano dados.txt");     // abre o terminal

    return 0;
}