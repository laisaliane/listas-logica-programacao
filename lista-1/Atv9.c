#include <stdio.h>

int main () {
    int f, c;
    printf("Conversao de Temperatura para Fahrenheit \n");
    printf("******************************\n");
    printf("Informe a temperatura em Celsius");
    scanf("%d", &c);

    f = (c * 9/5) + 32;

    printf("A temperatura em Fahrenheit equivale a: %d\n", f);

}