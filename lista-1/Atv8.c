#include <stdio.h>

int main () {
    float raio, pi, area;

    printf("Area de um Circulo \n");
    printf("Informe o valor equivalente ao raio: \n");
    scanf("%f", &raio);

    pi = 3.14;
    area = pi * (raio*raio);

    printf("A area do circulo equivale a: %.2f. \n", area);

}