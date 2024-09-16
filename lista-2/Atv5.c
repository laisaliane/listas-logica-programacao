#include <stdio.h>

int main () {

    float  metros, quilom;


    printf("Transformando velocidade de m/s para km/h \n");
    printf("---------------------------------------- \n");


    printf("Informe a velocidade em m/s \n");
    scanf("%f", &metros);

    quilom = metros * 3.6;

    printf("A velocidade em KM/h equivale a %2.f \n", quilom);

}