#include <stdio.h>
int main () {
    int temp, dist, veloc;

    printf("Calculo de Tempo de Viagem \n");
    printf("******************************\n");

    printf("Informe o dado da distancia: \n");
    scanf("%d", &dist);

    printf("Informe o dado da velocidade: \n");
    scanf("%d", &veloc);

    temp = dist / veloc;

    printf("O tempo de viagem e de: %d", temp);

}