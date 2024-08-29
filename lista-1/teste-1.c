#include <stdio.h>

int main() {
    int a = 5; // Valor inicial de a
    int b = 10; // Valor inicial de b

    printf("Antes da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Troca dos valores usando operações aritméticas
    a = a + b; // Agora a contém a soma de a e b
    b = a - b; // Subtrai b da soma, b agora tem o valor original de a
    a = a - b; // Subtrai o novo valor de b da soma, a agora tem o valor original de b

    printf("Após a troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}