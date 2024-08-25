#include <stdio.h>

int main () {
    int f, c;

    printf("Informe a temperatura em Celsius");
    scanf("%d", &c);

    f = (c * 9/5) + 32;

    printf("A temperatura em F equivale a: %d\n", f);

}