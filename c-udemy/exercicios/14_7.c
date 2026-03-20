// 7 - Verificar se um Jogador Pode Jogar

#include <stdio.h>

int main() {
    int idade;

    printf("Idade do Jogador: ");
    scanf("%d", &idade);

    if(idade <= 20) {
        printf("O jogador pode jogar na categoria Sub-20.");
    } else {
        printf("O jogador deve jogar na categoria profissional.");
    }

    return 0;
}