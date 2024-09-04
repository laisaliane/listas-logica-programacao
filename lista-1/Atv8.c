#include <stdio.h>

int main () {
    float r, pi, a;

    printf("Informe o valor equivalente ao raio: \n");
    scanf("%f", &r);

    pi = 3.14;
    a = pi * (r*r);

    printf("A area do circulo equivale a: %.2f. \n", a);

}