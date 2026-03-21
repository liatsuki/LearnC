#include <stdio.h>
#include <string.h>

int main() {
    char nome[] = "Joao";
    char sobrenome[] = " Silva";

    strcat(nome, sobrenome); // concatena -> nome + sobrenome passa para a variavel nome
    printf("Nome completo: %s\n", nome);

    printf("Tamanho: %d\n", strlen(nome));  // Tamanho: 10 -> porque conta tambem com o espaco entre palavras
    
    // Comparacao de strings entre o nome e Joao Silva
    if (strcmp(nome, "Joao Silvo") == 0) {
        printf("Nome correto!\n");
    } else {
        printf("Nome incorreto!\n");
    }

    return 0;
}