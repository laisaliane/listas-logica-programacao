#include <stdio.h>

/*
    O que é r? o que é d? o que é c?

    Quando escrever um programa você deve dar nomes significativos as variáveis. Talvez não precise escrever o nome completamente, se ele for grande.
    Mas você precisa dar nomes elucidativos às variáveis.

    ex: valorReais; valorDolar, convertidoReais;

    Corrija isso aqui e em todas as outras atividades;
*/
int main () {
    float r, d, c;

    printf("Informe quanto deseja trocar para reais: \n");
    scanf("%f",&d);

    r = 5.50;
    c = d * r;

    printf("Voce tera em reais R$ %.2f", c);


}