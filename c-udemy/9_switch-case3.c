#include <stdio.h>

int main() {
    char operador;
    float a, b;
    
    printf("Operacao (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Dois valores: ");
    scanf("%f %f", &a, &b);

    switch (operador) {

        case '+':
            printf("%.2f %c %.2f = %.2f", a, operador, b, (a+b));
            break;

        case '-':
            printf("%.2f %c %.2f = %.2f", a, operador, b, (a-b));
            break;

        case '*':
            printf("%.2f %c %.2f = %.2f", a, operador, b, (a*b));
            break;

        case '/':
            if (a != 0 && b != 0) { // se os numeros forem diferentes de 0, faz a divisão
                printf("%.2f %c %.2f = %.2f", a, operador, b, (a/b));
            } else { // se não, diz que não dá pra fazer com 0
                printf("Nao e possivel fazer uma divisao por zero.");
            }
            break;
            
        default:
            printf("Operador Invalido!");
    }

    return 0;
}