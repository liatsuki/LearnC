// 9 - Controlo de Revisao de Carros

#include <stdio.h>

int main() {
    int quantidadeCarros;

    printf("Quantidade de carros a serem registados: ");
    scanf("%d", &quantidadeCarros);

    for (int i = 0; i < quantidadeCarros; i++) {
        char modelo[50];
        int ano;
        int carro_funcionando;

        printf("\nCarros %d:\n", i + 1);
        printf("Modelo do carro: ");
        scanf("%s", &modelo);

        printf("Ano de fabricação: ");
        scanf("%d", &ano);

        printf("O carro está funcionando normalmente (1 ou 0): ");
        scanf("%d", &carro_funcionando);

        if (ano < 2005 && carro_funcionando == 0) {
            printf("O carro %s precisa de REPAROS URGENTES!\n", modelo);
        } else if (ano < 2005) {
            printf("O carro %s é antigo, recomenda-se uma revisão!\n", modelo);
        } else if (carro_funcionando == 0) {
            printf("O carro %s precisa de manutenção!\n", modelo);
        } else {
            printf("O carro %s está em boas condições!\n", modelo);
        }
    }
    
    return 0;
}