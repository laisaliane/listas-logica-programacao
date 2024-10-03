#include <stdio.h>

int main () {

    int idade;

    printf("Classificacao de Idade \n");
    printf("+++++++++++++++++++++++++++++++ \n");

    printf("Informe a sua idade \n");
    scanf("%d", &idade);

    if (idade <= 12 ) {
        printf("Voce e crianca \n");
    }

    if (idade >= 13 && idade <= 17) {
        printf("Voce e adolescente \n");
    }

    if (idade >= 18 && idade <= 59) {
        printf("Voce e adulto \n");
    }

    else  {
        printf("Voce e idoso \n");
    }


}