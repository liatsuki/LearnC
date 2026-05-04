#include <stdio.h>

void imprimirVetor(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

void insertionSort(int numeros[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int chave = numeros[i];
        int j = i - 1;

        while (j >= 0 && numeros[j] > chave) {
            numeros[j + 1] = numeros[j];
            j--;
        }

        numeros[j + 1] = chave;
    }
}

int main() {
    int numeros[] = {1, 3, 5, 7, 2, 4, 8, 9, 6};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); // resultado: 9 - obter o numero de elementos no vetor

    printf("Vetor original: \n");
    imprimirVetor(numeros, tamanho);

    printf("\n");

    insertionSort(numeros, tamanho);

    printf("Vetor ordenado: \n");
    imprimirVetor(numeros, tamanho);

    return 0;
}