#include <stdio.h>

int main () {

    float p, t;

    printf("Qual o valor do produto? \n");
    scanf("%f",&p);

    t = p - (10%100);

    printf("O preco final do produto equivale a: %.2f", t);
}