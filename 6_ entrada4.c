#include <stdio.h>

int main() {
    int num1 = 10, num2 = 2;
    int soma, subt, mult, divi, rest;

    soma = num1 + num2; // Soma
    subt = num1 - num2; // Subtração
    mult = num1 * num2; // Multiplicação
    divi = num1 / num2; // Divisão
    rest = num1 % num2; // Resto da Divisão

    printf("Adicao: %d + %d = %d\n", num1, num2, soma);
    printf("Subtracao: %d - %d = %d\n", num1, num2, subt);
    printf("Multiplicacao: %d x %d = %d\n", num1, num2, mult);
    printf("Divisao: %d : %d = %d\n", num1, num2, divi);
    printf("Resto: %d %% %d = %d\n", num1, num2, rest);

    return 0;
}