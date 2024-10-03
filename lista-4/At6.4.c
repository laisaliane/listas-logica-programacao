#include <stdio.h>

int main () {

    int numA, numB;
    char operador;

    printf("Calculadora Simples \n");
    printf("++++++++++++++++++++++++++++++++++ \n");

    printf("Qual o operador deseja: \n");
    operador = getchar();

    printf("Informe o primeiro numero: \n");
    scanf("%d", &numA);

    printf("Informe o segundo numero: \n");
    scanf("%d", &numB);

    if (operador == '+') {
        printf("o resultado e %d ", numA + numB);
    }

    if (operador == '-') {
        printf("o resultado e %d ", numA - numB);
    }

    if (operador == '*') {
        printf("o resultado e %d ", numA * numB);
    }

    if (operador == '/') {
        printf("o resultado e %d ", numA / numB);
    }
}