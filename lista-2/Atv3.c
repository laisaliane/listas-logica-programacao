#include <stdio.h>

int main () {
    int valor1, valor2, valor3, squad;

    printf("A soma dos quadrados \n");
    printf("----------------------- \n");

    printf("Informe o primeiro numero  \n");
    scanf(" %d", &valor1);

    printf("Informe o segundo numero  \n");
    scanf(" %d", &valor2);

    printf("Informe o terceiro numero  \n");
    scanf(" %d", &valor3);

    squad = (valor1 * valor1) + (valor2 * valor2) +(valor3 * valor3);

    printf("A soma dos quadrados dos numeros indicados, e igual a %d \n", squad);


}