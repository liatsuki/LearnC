#include <stdio.h>
#include <stdlib.h>   // para usar malloc e free

int main() {
    int tamanho;
    int *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // vetor dinamico
    vetor = (int *) malloc(tamanho * sizeof(int));

    if (vetor == NULL) {  // se nao tiver nada (NULL), da erro
        printf("Erro: memoria insuficiente.\n");
        return 1; // dar return 1 significa erro
    }

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i * 10;
    }

    printf("Vetor dinamico populado: \n");

    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", vetor[i]);
    }

    free(vetor); // para limpar a memoria quando nao for preciso

    return 0;
}