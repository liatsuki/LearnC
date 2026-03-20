#include <stdio.h> // Salário

int main(){
    int numfunc, numhorastrab;
    float valor, salario;

    scanf("%d", &numfunc);
    scanf("%d", &numhorastrab);
    scanf("%f", &valor);

    salario = valor * numhorastrab;

    printf("NUMBER = %d\n", numfunc);
    printf("SALARY = U$ %.2f\n", salario);
}