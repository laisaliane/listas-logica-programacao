#include <stdio.h>

int main () {

    float sombrapredio, alturapredio, alturaobjeto, sombraobjeto;

    printf("Altura do predio \n");
    printf("---------------------- \n");

    printf("Informe a sua altura: \n");
    scanf("%f", &alturaobjeto);

    printf("Informe a medida da sua sombra: \n");
    scanf("%f", &sombraobjeto);

    printf("Informe a medida da sombra do predio: \n");
    scanf("%f", &sombrapredio);

    alturapredio = (sombrapredio * alturaobjeto) / sombraobjeto;

    printf("A altura do predio e equivalente a: %.2f \n", alturapredio);


}