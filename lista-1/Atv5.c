#include <stdio.h>

/*
    Informe um número / Informe outro número. Isso não são boas mensagens. Tem que ter capricho até no mínimo
*/
int main () {
    int a, b, div;

    printf("**********************************\n");
    printf("*    Divisor de Dois Números     *\n");
    printf("**********************************\n");



    printf("Informe o Divisor: \n");
    scanf("%d",&a);

    printf("Informe o Dividendo: \n");
    scanf("%d", &b);

    div = a / b;

    printf("O resultado da divisao dos numeros informados e: %d\n", div);

}