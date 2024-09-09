#include <stdio.h>

int main () {
    int valor1, dobro;

    printf("Dobro de um valor \n");
    printf("--------------------- \n");

    printf("Informe um numero de 1 a 10 \n");
    scanf("%d", &valor1);

    dobro = valor1 * 2;

    printf("O dobro do numero informado e igual a: %d \n", dobro);
}