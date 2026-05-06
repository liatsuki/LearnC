#include <stdio.h>

int main() {
    int a, b, c, soma;
    char s[100];

    scanf("%d", &a);
    scanf("%d %d", &b, &c);
    scanf("%s", s);

    soma = a + b + c;

    printf("%d %s\n", soma, s);

    return 0;
}