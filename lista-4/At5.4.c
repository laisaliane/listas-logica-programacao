#include <stdio.h>

int main () {

    float nota;

    printf("Classificacao de Nota \n");
    printf("++++++++++++++++++++++++++++++ \n");

    printf("Informe a nota do aluno (a) \n");
    scanf("%f", &nota);

    if (nota <= 4) {
        printf("Nota insuficiente");
    }

    if (nota >= 5 && nota <= 6) {
        printf("Nota regular");
    }

    if (nota  >= 7 && nota <= 8) {
        printf("Bom");
    }

    else {
        printf("Otimo");
    }
}