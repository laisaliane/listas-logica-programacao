#include <stdio.h>

int main () {
    printf("Compatibilidade Eleitoral \n");
    printf("--------------------------- \n");

    int ano;

    printf("Informe o ano que voce nasceu \n");
    scanf("%d", &ano);

    if (ano <= 2006) {
        printf("Voce podera votar nesse ano");
    }

    else if (ano > 2007) {
        printf(" Voce nao podera votar esse ano");
    }

}