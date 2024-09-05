#include <stdio.h>

int main () {
    float reais, dolar, cambio;

    printf("Conversao de Moeda \n");
    printf("******************************\n");

    printf("Informe quanto deseja trocar para reais: \n");
    scanf("%f",&dolar);

    reais = 5.50;
    cambio = dolar * reais;

    printf("Voce tera em reais R$ %.2f", cambio);


}