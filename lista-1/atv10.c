#include <stdio.h>

int main () {
    float imc, p, a;

    printf("Informe o seu peso: \n");
    scanf("%f", &p);
    printf("Informe a altura: \n");
    scanf("%f", &a);

    imc = p / (a * a);

    printf("O IMC e de: %.2f", imc);
}