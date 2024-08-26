#include <stdio.h>

int main () {
    float r, d, c;

    printf("Informe quanto deseja trocar para reais: \n");
    scanf("%f",&d);

    r = 5.50;
    c = d * r;

    printf("Voce tera em reais R$ %.2f", c);


}