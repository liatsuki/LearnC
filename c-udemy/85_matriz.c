#include <stdio.h>

int main() {
    int notas[3][2] = {{1,2}, {10,6}, {7, 4}};

    printf("%d\n", notas[1][0]); // trazer o numero 10
    
    printf("%d\n", notas[2][1]); // trazer o numero 4

    return 0;
}