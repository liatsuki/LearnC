#include <stdio.h>

int main() {
    char cidade[3][20];

    for (int i = 0; i < 3; i++) {
        printf("Cidade %d: ", i+1);
        scanf("%s", cidade[i]);
    }

    printf("\n");

    printf("As cidades sao:\n");

    for (int i = 0; i < 3; i++) {
        printf("%d - %s\n", i+1, cidade[i]);
    }
}