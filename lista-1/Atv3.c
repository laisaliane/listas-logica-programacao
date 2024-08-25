#include <stdio.h>

int main() {
    int n1, n2, Sub;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: " );
    scanf("%d", &n2);

    Sub = n1 - n2;
    printf("A Subtracao desses dois numeros e igual a: %d \n", Sub);
}