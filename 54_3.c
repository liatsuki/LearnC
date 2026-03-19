#include <stdio.h>

int maior(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3){
        return num1;
    } else if (num2 >= num1 && num2 >= num3) {
        return num2;
    } else {
        return num3;
    }
}

int main() {
    int num1, num2, num3;

    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    printf("Numero 3: ");
    scanf("%d", &num3);

    printf("\nMaior numero = %d\n", maior(num1, num2, num3));
}