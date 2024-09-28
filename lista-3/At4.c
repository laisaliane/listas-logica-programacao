#include <stdio.h>
#include <math.h>

int main () {
    //Utilize a fórmula de Bhaskara para determinar os pontos de contato do trilho com o solo,
    //conhecidos como as raízes x' e x'' da equação quadrática fornecida.

    int pontoA, pontoB, pontoC, delta, raiz1, raiz2, teste;

    printf("Encontrando as raizes: \n");
    printf("----------------------------------  \n");

    printf("Informe o valor do ponto A: \n");
    scanf("%d", &pontoA);
    printf("Informe o valor do ponto B: \n");
    scanf("%d", &pontoB);
    printf("Informe o valor do ponto C: \n");
    scanf("%d", &pontoC);

    delta = (pontoB * pontoB) - (4 * pontoA * pontoC);

    printf("o valor de delta equivale a: %d \n", delta);

    printf("--------------Descobrindo as raizes----------------------- \n");
    teste = sqrt (4);
    printf("apenas para verificar raiz: %d \n", teste);
    raiz1 = - pontoB + sqrt(delta) / (2 * pontoA);
    raiz2 = - pontoB - sqrt(delta) / (2 * pontoA);

    printf("O valor da raiz 1 linha equivale a: %d \n", raiz1);
    printf("O valor da raiz 2 linha equivale a: %d \n", raiz2);
}
