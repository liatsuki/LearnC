#include <stdio.h>

union Valor {
    int num;
    float dec;
    char car;
};

int main() {
    int opcao;

    printf("Que tipo quer guardar? (1 - int; 2 - float; 3 - char) ");
    scanf("%d", &opcao);

    union Valor d1;

    switch (opcao) {
        case 1:
            printf("Tipo escolhido: int\n");
            printf("O valor a guardar: ");
            scanf("%d", &d1.num);
            printf("Valor: %d\n", d1.num);
            break;
        case 2:
            printf("Tipo escolhido: float\n");
            printf("O valor a guardar: ");
            scanf("%f", &d1.dec);
            printf("Valor: %.2f\n", d1.dec);
            break;
        case 3:
            printf("Tipo escolhido: char\n");
            printf("O valor a guardar: ");
            scanf(" %c", &d1.car);
            printf("Valor: %c \n", d1.car);
            break;
        default:
            printf("Erro: tipo invalido!\n");
    }
}