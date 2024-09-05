#include <stdio.h>

int main () {
    float imc, peso, alt;

    printf("Calculo do IMC \n");
    printf("******************************\n");

    printf("Informe o seu peso: \n");
    scanf("%f", &peso);

    printf("Informe a altura: \n");
    scanf("%f", &alt);

    imc = peso / (alt * alt);

    printf("O IMC e de: %.2f", imc);
}