#include <stdio.h>
// ler numero; descobrir como quebrar o numero; inverter//
int main () {

    int uni, dez, cent, numero, auxnumero;

    printf("Invertendo os algarismos \n");
    printf("--------------------------- \n");

    printf("Informe um numero com 3 digitos: \n");
    scanf("%d ", &numero);

    cent = numero / 100;
    dez = (numero % 100) / 10 ;
    uni = numero % 10;

    printf("unidade e %d \n", uni);
    printf("dezena e %d \n", dez);
    printf("centena e %d \n", cent);

    auxnumero = uni;
    uni = cent;
    cent = auxnumero;
    dez = dez;


    printf("O inverso do numero inforado e: %d %d %d \n", cent, dez, uni);
}