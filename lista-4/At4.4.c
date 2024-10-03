#include <stdio.h>

int main () {

    float ladoA, ladoB, ladoC;

    printf("Verificacao de Triangulo \n");
    printf("+++++++++++++++++++++++++++++++++ \n");

    printf("Informe o valor da lateral A do triangulo: \n");
    scanf("%f", &ladoA);

    printf("Informe o valor da lateral B do triangulo: \n");
    scanf("%f", &ladoB);

    printf("Informe o valor da base C do triangulo: \n");
    scanf("%f", &ladoC);

    if (ladoA + ladoB > ladoC) {
        printf("Esse triangulo e valido");
    }
    else {
        printf("Esses valores nao sao validos para formar um triangulo");
    }
}