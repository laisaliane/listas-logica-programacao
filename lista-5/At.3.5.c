#include <stdio.h>

// As maçãs custam R$ 0,30 cada se forem compradas menos que uma dúzia.
// E R$ 0,25 se forem compradas pelo menos doze. Escreva um programa que leia
// o número de maçãs compradas, calcule e escreva o valor total da compra.

int main () {
    printf("Compras de macas \n");
    printf("--------------------------- \n");

    float quantidade, valor;

    printf("Informe a quantidade de macas adquiridas: \n");
    scanf("%f", &quantidade);

    if (quantidade < 12) {
        printf("O valor total da compra eh %2.f", quantidade * 0.30);
    }

    if (quantidade >= 12) {
        printf("O valor total da compra eh %2.f", quantidade * 0.25);
    }
}
