#include <stdio.h>

int main () {
    int b, h, a, p;

    printf("Informe o valor da base: \n");
    scanf("%d", &b);
    printf("Informe o valor para a altura: \n");
    scanf("%d", &h);

    a = b * h;
    p = 2 *(b*h);
    printf("A area do retangulo equivale a: %d \n", a);
    printf("E o perimetro e: %d \ n", p);

}