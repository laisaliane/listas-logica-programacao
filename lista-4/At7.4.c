#include <stdio.h>

int main () {

    int numeroP, numeroS, numeroT;

    printf("Verificacao de Maior Numero \n");
    printf("+++++++++++++++++++++++++++ \n");

    printf("Informe o primeiro numero: \n");
    scanf("%d", &numeroP);

    printf("Informe o segundo numero: \n");
    scanf("%d", &numeroS);

    printf("Informe o terceiro numero: \n");
    scanf("%d", &numeroT);

    if (numeroP > numeroS && numeroP > numeroT) {
        printf("O primeiro numero e maior que os demais");
    }

    if (numeroS > numeroP && numeroS > numeroT) {
        printf("O segundo numero e maior que os demais");
    }

    else {
        printf("O terceiro numero e maior que os demais");
    }

}