#include <stdio.h>

int main () {

    int uni, dez, cent, num;

    printf("Invertendo os algarismos \n");
    printf("--------------------------- \n");

    printf("Informe a centena: \n");
    scanf("%d ", &cent);

    printf("Informe a dezena: \n");
    scanf("%d ", &dez);

    printf("Informe a unidade: \n");
    scanf("%d ", &uni);

    num = uni;
    uni = cent;
    cent = num;

    printf("os nunmeros digitados foram: %d , %d e %d \n", cent, dez, uni);
    printf("E inversamente ficam: %d , %d e %d", cent, dez, uni);



}