#include <math.h>
#include <stdio.h>
int main () {
    int arest, vol;

    printf("Volume de um Cubo \n");
    printf("******************************\n");

    printf("Informe o valor: \n");
    scanf("%d", &arest);

    vol = arest * arest * arest;

    printf("O volume do triangulo e: %d", vol);
}