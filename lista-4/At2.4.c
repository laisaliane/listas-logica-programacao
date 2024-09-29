#include <stdio.h>

int main () {

    int ano;

    printf("Verificacao de Ano Bissexto \n");
    printf("+++++++++++++++++++++++++++++++++++++++  \n");

    printf("Em que ano estamos? \n");
    scanf("%d", &ano);

    if (ano % 4 == 0  && ano % 400 == 0) {
        printf("O ano e considerado bissexto \n");
    }
}