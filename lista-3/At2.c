#include <stdio.h>

int main () {
//Escreva um programa para calcular o quadrado do inverso de um número de 2 digitos.

    int numero, auxInverso, dez, uni;

    printf("Quadrado do Inverso de Numero com dois digitos \n");
    printf("-------------------------------------------------- \n");

    printf("Informe um numero contendo dois digitos: \n");
    scanf("%d", &numero);

    dez = (numero / 10) ;
    uni = numero % 10;

    printf("apenas pra ver como vai ficar: %d \n", dez);
    printf("apenas pra ver como vai ficar: %d \n", uni);

    //12 21
    // 1 1
    //auxInverso = dez;
    //dez = uni;
    //uni = auxInverso;

    numero = uni  * 10 + dez;

    printf("apenas pra ver como vai ficar: %d \n", numero);

    numero = numero * numero;
    printf("O quadrado do inverso do numero informado e: %d \n", numero);



}
