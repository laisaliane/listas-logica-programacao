#include <stdio.h>

int main () {

    float celcius, auxescolha;


    printf("Conversao de Temperatura \n");
    printf("++++++++++++++++++++++++++ \n");

    printf("Informe a temperatura atual em C \n");
    scanf("%f", &celcius);

    printf("Digite 1 para transformar a temperatura em Fahrenheit ou 2 para transformar em Kelvin \n");
    scanf("%f", &auxescolha);

    if (auxescolha == 1) {
        printf("Em Fahrenheit a temperatura e: %.2f", celcius * 1.8 + 32);
    }

    if (auxescolha == 2) {
        printf("Em Kelvin a temperatura e: %.2f", celcius + 273);
    }
}
