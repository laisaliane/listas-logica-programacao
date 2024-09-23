#include <stdio.h>

int main () {

    int primeironumero, segundonumero, auxnumero;

    printf("Subtraindo numeros inteiros \n");
    printf("--------------------------- \n");

    printf("Informe o primeiro numero: \n");
    scanf("%d", &primeironumero);

    printf("Informe o segundo numero: \n");
    scanf("%d", &segundonumero);

    primeironumero = primeironumero - segundonumero;

    printf(" A subtracao entre o primeiro e segundo numero resultam no valor: %d \n", primeironumero);

    auxnumero = primeironumero;
    primeironumero = segundonumero;
    segundonumero = auxnumero;

    primeironumero = primeironumero - segundonumero;

    printf("A subtracao entre o inverso dos numeros informados resultam no valor: %d \n", primeironumero);
}