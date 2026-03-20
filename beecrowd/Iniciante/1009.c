#include <stdio.h> // Salário com Bônus

int main(){
    char nome;
    double salario, totalvendas, total;
    float COMISSAO = 0.15;

    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &totalvendas);

    total = salario + (totalvendas * COMISSAO);

    printf("TOTAL = R$ %.2f\n", total);
}