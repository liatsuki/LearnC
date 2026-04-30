 #include <stdio.h>

 void bubbleSort(int idades[]) {
    for (int i = 1; i < 6; i++) {
        for (int j = 0; j < 6 - i; j++) {
            if (idades[j] > idades[j + 1]) {
                int temp = idades[j];
                idades[j] = idades[j + 1];
                idades[j + 1] = temp;
            }
        }
    }
 }

 void imprimirVetor(int idades[]) {
    for (int i = 0; i < 6; i++) {
        printf("%d ", idades[i]);
    }
 }

 int main() {
    int idades[6] = {15, 3, 22, 8, 19, 7};

    printf("Vetor original: \n");
    imprimirVetor(idades);

    printf("\n");

    printf("Vetor ordenado: \n");
    bubbleSort(idades);
    imprimirVetor(idades);

    printf("\n");
 }