#include <stdio.h>

int main () {

    int caixaA, caixaB, caixaC;

    printf("Troca de Valores\n");
    printf("******************************\n");

    printf("Qual o valor da caixa A? \n");
    scanf("%d", &caixaA);

    printf("Qual o valor da  caixa B? \n");
    scanf("%d", &caixaB);

    printf(" A caixa A tinha: %d e a caixa B tinha: %d \n", caixaA, caixaB);

    caixaC = caixaA;
    caixaA = caixaB;
    caixaB = caixaC;

    printf("Apos a troca dos conteudos a caixa A passou a ter: %d e a caixa B passou a ter: %d", caixaA, caixaB);

}