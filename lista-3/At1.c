#include <stdio.h>

//Escreva um programa para calcular o dobro do inverso de um número de 3 digitos.

int main () {
    int numInverso, numero, cent, dez, uni;

    printf("Dobro do inverso de um numero de 3 digitos \n");
    printf("-------------------------------------------\n");

    printf("Digite um numero com tres digitos: \n");
    scanf("%d", &numero);

    cent = numero / 100;
    dez = (numero % 100) / 10;
    uni = (numero % 100) - dez * 10;

    printf("apenas para ver: %d \n", cent);
    printf("apenas para ver: %d \n", dez);
    printf("apenas para ver: %d \n", uni);

    numInverso = (uni * 100) +  (dez * 10) + cent;
    printf("O inverso do numero digitado e: %d \n", numInverso);

    printf("E o dobro desse numero e: %d \n", numInverso * 2);

    }