#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("Ho");
    }
    printf("!\n");

    return 0;
}