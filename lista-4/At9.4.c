#include <stdio.h>

int main () {

    char caractere;

    printf("Classificacao de Caractere \n");
    printf("+++++++++++++++++++++++++++++++++ \n");

    printf("Informe o caractere desejado: \n");
    caractere = getchar();

    //a= 97; z=122; A = 65; z =90; 0 =48; 9 = 57; ! = 33; ? =63;
    if ( (caractere >= 97 && caractere <= 122) || (caractere >= 65 && caractere <= 90)) {
        if (caractere == 'a' || caractere == 'A' || caractere == 'e' || caractere == 'E'  || caractere == 'i' || caractere == 'I'
            || caractere == 'o' || caractere == 'O' || caractere == 'u' || caractere == 'U') {
            printf(" O caractere informado eh vogal");
        }
        else {
            printf("Trata-se de uma consoante");
        }

    }

    else if (caractere >= 48 && caractere <= 57) {
        printf("O caractere informado eh numero %c",caractere);
    }

    else {
        printf("Trata-se de simbolo");
    }

}