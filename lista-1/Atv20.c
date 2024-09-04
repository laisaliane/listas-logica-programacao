#include <stdio.h>

int main () {

    float preco, desc;

    printf("Calculo de Desconto \n");
    printf("******************************\n");
    printf("Qual o valor do produto? \n");
    scanf("%f",&preco);

    desc = preco - (10%100);

    printf("O preco final do produto equivale a: %.2f", desc);
}