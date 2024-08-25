#include <stdio.h>

int main () {
    int a, b, div;
    printf("Informe um numero: \n");
    scanf("%d",&a);
    printf("Informe outro numero: \n");
    scanf("%d", &b);

    div = a / b;

    printf("O resultado da divisao dos numeros informados e: %d\n", div);

}