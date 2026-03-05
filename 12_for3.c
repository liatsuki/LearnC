#include <stdio.h>

int main() {
    
    printf("Contagem regressiva para a bomba explodir:\n");

    for (int i = 3; i >= 1; i--) {
        printf("%d...\n", i);
    }

    printf("## BOOM! ##\n");

    return 0;
}