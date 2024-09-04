#include <stdio.h>

int main () {
    int numb1,numb2,numb3,soma;

    printf("Calculo de Media Aritmetica");
    printf("******************************\n");
    printf("Informe o primeiro numero: \n");
    scanf("%d",&numb1);
    printf("Informe o Segundo numero: \n");
    scanf("%d",&numb2);
    printf("Informe o terceiro numero: \n");
    scanf("%d",&numb3);

    // Não é assim que se calculá média.
    soma = (numb1+numb2+numb3)/3;

    printf("A media desses numeros e igual a: %d",soma);

}
