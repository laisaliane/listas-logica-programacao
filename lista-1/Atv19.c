#include <stdio.h>
int main () {
    int metros, cent;

    printf("Conversao de Metros para Centimetros \n");
    printf("******************************\n");

    printf("Informe a medida em metros: \n");
    scanf("%d", &metros);

    cent = metros * 100;

    printf("O valor em centimetros equivale a: %d", cent);

}