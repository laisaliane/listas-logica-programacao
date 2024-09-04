#include <stdio.h>
int main () {
    int t, d, v;
    printf("Informe a distancia: \n");
    scanf("%d", &d);
    printf("Informe a velocidade: \n");
    scanf("%d", &v);

    t = d/v;

    printf("O tempo de viagem e de: %d", t);

}