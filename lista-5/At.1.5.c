#include <stdio.h>

int main () {
    //Escreva um programa para ler 2 valores e escrever o maior deles. Se forem
    //iguais Escreva que os valores são iguais

    printf("Verificando qual o maior numero \n");
    printf("-------------------------------- \n");


    int numero1, numero2;

    printf("Informe o primeiro numero: \n");
    scanf("%d", &numero1);
    printf("Informe o segundo numero: \n");
    scanf("%d", &numero2);

    if (numero1 > numero2 || numero2 > numero1) {
        printf("O maior numero entre os informados eh %d");
    }

    else if (numero2 == numero1) {
        printf("Os valores sao iguais");
    }

}
