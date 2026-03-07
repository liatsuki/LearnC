#include <stdio.h>

int vogal (char letra) {
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        return 1;
    } else {
        return 0;
    }
}

int contar (char palavra[]) {
    int vogais = 0, consoantes = 0;

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (vogal(palavra[i]) == 1) {
            printf("A letra %c e uma vogal.\n", palavra[i]);
            vogais++;
        } else {
            printf("A letra %c e uma consoante.\n", palavra[i]);
            consoantes++;
        }
    }
    return vogais;
}

int main() {
    char palavra[10];

    printf("Palavra: ");
    scanf("%s", palavra);

    printf("Vogais: %d\n", contar(palavra));
    //printf("Consoantes: %d\n", consoantes);
}