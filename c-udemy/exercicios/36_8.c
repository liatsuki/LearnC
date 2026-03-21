// 8 - Controlo de Stock no Supermercado

#include <stdio.h>

int main() {
    int totalProdutos;

    printf("Quantidade de produtos a ser registrado: ");
    scanf("%d", &totalProdutos);

    for (int i = 1; i <= totalProdutos; i++) {
        char nome[50];
        int stock, minimo;

        printf("\n\nProduto %d: \n", i);

        printf("Nome do produto: ");
        scanf("%s", &nome);                     // string

        printf("Quantidade em stock: ");
        scanf("%d", &stock);  

        printf("Stock minimo recomendado: ");
        scanf("%d", &minimo);

        if (stock < minimo) {
            printf("-> O produto '%s' precisa ser resposto! (Stock: %d, Minimo: %d)", nome, stock, minimo);
        } else {
            printf("O produto '%s' tem stock suficiente. (Stock: %d, Minimo: %d)", nome, stock, minimo);
        }
    }
}