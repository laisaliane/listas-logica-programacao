#include <stdio.h>

int main () {

    int div1, div2, resto;

    printf("Mostrando o resto da divisao \n");
    printf("------------------------------\n");

    printf("Informe o divisor \n");
    scanf("%d", &div1);

    printf("Informe o dividendo \n");
    scanf("%d", &div2);

    resto = div1 % div2;

    printf("O resto da divisao e igual a %d \n", resto);

    }
