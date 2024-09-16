#include <stdio.h>

int main () {

    int varA, varB, SubAB, varC;

    printf("Subtraindo variaveis \n");
    printf("--------------------------- \n");

    printf("Informe a variavel A \n");
    scanf("%d", &varA);

    printf("Informe a variavel B \n");
    scanf("%d", &varB);

    SubAB = varA - varB;

     printf(" A subtracao entre as variaveis A e B resultam no valor: %d \n", SubAB);

    varC = varA;
    varA = varB;
    varB = varC;

    SubAB = varA - varB;

    printf("A subtracao entre o inverso das variaveis A e B resultam no valor: %d \n", SubAB);
}