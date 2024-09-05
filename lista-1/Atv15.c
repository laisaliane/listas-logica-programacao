#include <stdio.h>
int main () {
    int b, h, area;

    printf("Calculo de Area de um Triangulo \n");
    printf("******************************\n");

    printf("Informe o valor da base: \n");
    scanf("%d", &b);

    printf("Informe o valor da altura: \n");
    scanf("%d", &h);

    area = (b * h) / 2;

    printf("A area do triangulo equivale a: %d", area);
}