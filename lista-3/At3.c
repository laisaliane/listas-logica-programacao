#include <stdio.h>

int main () {
    int numerocent, numerodez, uni, cent, dez, uni_2, dez_2;

    printf("calculo do inverso do primeiro vs o segundo \n");
    printf("------------------------------------------------ \n");

    printf("Informe um numero de 3 digitos. \n");
    scanf("%d", &numerocent);

    cent = (numerocent /100);
    dez = (numerocent % 100) / 10;
    uni = numerocent - (cent * 100) - (dez *10);

    printf("apenas para ver como fica: %d \n", cent);
    printf("apenas para ver como fica: %d \n", dez);
    printf("apenas para ver como fica: %d \n", uni);

    printf("------------------------------------------  \n");

    printf("Informe um numero de 2 digitos. \n");
    scanf("%d", &numerodez);

    dez_2 = (numerodez % 100) / 10;
    uni_2 = numerodez - (dez_2 *10);

    printf("apenas para ver como fica: %d \n", uni_2);
    printf("apenas para ver como fica: %d \n", dez_2);

    numerocent = (uni * 100 + dez * 10 + cent) - (uni_2 * 10 + dez_2);
    printf("O calculo do inverso do primeiro vs o segundo equivale a: %d \n", numerocent);

    printf("----------------------------------------------------------------- \n ");
    printf("calculo do inverso do primeiro numero - (menos) o inverso do segundo numero \n");

    numerodez = (uni_2 * 10 + dez_2) - (uni * 100 + dez * 10 + cent);
    printf("O calculo do inverso do segundo vs o primeiro equivale a: %d \n", numerodez);


}
