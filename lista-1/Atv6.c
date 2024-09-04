#include <stdio.h>

int main () {
    int base, alt, area;

    printf("Area de um Retangulo \n");
    printf("******************************\n");
    printf ("Informe o valor da base: \n");
    scanf("%d", &base);
    printf("Informe o valor da altura: \n");
    scanf("%d", &alt);

    area = base * alt;
    printf("A area do retangulo e o equivalente a: %d \n", area);
}