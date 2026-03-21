#include <stdio.h>

int contar(int num) {
    int i;
    for(i = 1; i < num; i++) {
        printf(" %d\n", i);
    }
    return num;
}

int main() {
    int num;

    scanf("%d", &num);

    printf("%d\n", contar(num));
}