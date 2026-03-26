#include <stdio.h>

int main() {
    int scores[5], recorde = 5000;

    for (int i = 0; i < 5; i++) {

        printf("Score %d: ", i+1);
        scanf("%d", &scores[i]);

        if (scores[i] > recorde) {
            printf("Parabens! Score %d superou o recorde!\n", scores[i]);
            recorde = scores[i];
        }

    }
}