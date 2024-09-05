#include <stdio.h>

int main () {
    int nota1, nota2, nota3, media;

    printf("Calculo de Media Aritmetica");
    printf("******************************\n");
    
    printf("Informe o primeiro numero: \n");
    scanf("%d",&nota1);
    
    printf("Informe o Segundo numero: \n");
    scanf("%d",&nota2);
    
    printf("Informe o terceiro numero: \n");
    scanf("%d",& nota3);

 
    media = (nota1 + nota2 + nota3) / 3;

    printf("A media desses numeros e igual a: %d",media);

}
