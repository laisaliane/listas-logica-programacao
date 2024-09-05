#include <stdio.h>
int main () {
    int n1, n2, mult;

    printf("Multiplicando dois numeros inteiros \n");
    printf("******************************\n");

    printf("Informe o primeiro numero \n");
    scanf("%d", &n1);

    printf("Informe outro numero: \n");
    scanf("%d", &n2 );

    mult = n1 * n2;

    printf("A multiplicacao desses numeros e igual a: %d \n", mult);
}