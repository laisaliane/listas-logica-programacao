#include <stdio.h>

int main () {
    int valor1, valor2, soma;

    printf("Somando dois numeros inteiros \n");
    printf("******************************\n");

    printf("Informe o primeiro numero: ");
    scanf("%d", &valor1);

    printf("Informe o segundo numero: " );
    scanf("%d", &valor2);

    soma = valor1 + valor2;

    printf("A soma desses dois numeros e igual a: %d \n", soma);

}