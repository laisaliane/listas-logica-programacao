#include <stdio.h>

int main () {
    int base, alt, area, peri;

    printf("Perimetro de um Retangulo \n");
    printf("******************************\n");

    printf("Informe o valor da base: \n");
    scanf("%d", &base);

    printf("Informe o valor para a altura: \n");
    scanf("%d", &alt);

    area = base * alt;
    peri = 2 *(base*alt);

    printf("A area do retangulo equivale a: %d \n", area);

    printf("E o perimetro e: %d \ n", peri);

}