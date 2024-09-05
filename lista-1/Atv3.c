#include <stdio.h>

int main() {
    int valor1, valor2, Sub;

    printf("Subtraindo dois numeros inteiros \n");
    printf("******************************\n");

    printf("Informe o primeiro numero: ");
    scanf("%d", &valor1);

    printf("Informe o segundo numero: " );
    scanf("%d", &valor2);

    Sub = valor1 - valor2;

    printf("A Subtracao desses dois numeros e igual a: %d \n", Sub);
}