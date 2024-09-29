#include <stdio.h>

int main () {

    float celcius, far, kelv;
    char temperatura [50] = "";

    printf("Conversao de Temperatura \n");
    printf("++++++++++++++++++++++++++ \n");

    printf("Informe a temperadura atual em C \n");
    scanf("%f", &celcius);

    printf("Deseja transformar em Fahrenheit ou Kelvin? \n");
    scanf("%s", &temperatura);
}
