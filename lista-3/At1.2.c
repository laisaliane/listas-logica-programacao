#include <stdio.h>

int main () {

    int numero, dez, cent, uni;

    printf("Dobro do inverso de um numero de 3 digitos com a variavel inicial \n");
    printf("-------------------------------------------\n");

    printf("Informe um numero de tres digitos: \n");
    scanf("%d", &numero);

    cent = (numero /100);
    dez = (numero % 100) / 10;
    uni = numero - (cent * 100) - (dez * 10);

    printf("apenas para ver como fica: %d \n", cent);
    printf("apenas para ver como fica: %d \n", dez);
    printf("apenas para ver como fica: %d \n", uni);

    numero = (uni * 100) + (dez * 10) + cent;
    printf("O dobro do inverso desse numero equivale a: %d \n", numero * 2);


}