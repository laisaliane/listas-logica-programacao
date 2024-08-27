#include <stdio.h>
int main () {
    int b,h,a;
    printf("Informe o valor da base: \n");
    scanf("%d", &b);
    printf("Informe o valor da altura: \n");
    scanf("%d", &h);

    a = (b*h)/2;
    printf("A area do triangulo equivale a: %d", a);
}