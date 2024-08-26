#include <stdio.h>

int main () {
    int a,b,c,s;
    printf("Informe o primeiro numero: \n");
    scanf("%d",&a);
    printf("Informe o Segundo numero: \n");
    scanf("%d",&b);
    printf("Informe o terceiro numero: \n");
    scanf("%d",&c);

    s = (a+b+c)/2;

    printf("A media desses numeros e igual a: %d",s);

}
