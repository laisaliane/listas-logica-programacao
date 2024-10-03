#include <stdio.h>

int main () {
    int impar, par, numero;

    printf("Verificacao de Numero Par ou Impar \n");
    printf("+++++++++++++++++++++++++++++++++++++++++++ \n");

    printf("Insira um numero \n");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("esse numero e par \n");

    }

    else {
        printf("Esse numero e impar");
    }

}