#include <stdio.h>

int main () {
    int b, h, a;

    printf ("Informe o valor da base: \n");
    scanf("%d", &b);
    printf("Informe o valor da altura: \n");
    scanf("%d", &h);

    a = b * h;
    printf("A area do retangulo e o equivalente a: %d \n", a);
}