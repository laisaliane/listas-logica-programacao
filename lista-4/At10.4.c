#include <stdio.h>
#include <string.h>

int main () {

    int SENHA = 123456;
    char  LOGIN [5] = "laisa";
    char loginInformado [5];
    int senhaInformada;

    printf("Verificacao de Login \n");
    printf("+++++++++++++++++++++++++++++++++ \n");

    printf("Informe o login: \n");
    fflush (stdout);
    scanf("%s", &loginInformado);

    printf("Informe a senha: \n");
    scanf("%d", &senhaInformada);

    printf("o login informado %d \n", strcmp( loginInformado, LOGIN) != 0);
    printf("a senha informada %d \n", senhaInformada);

     if (strcmp(loginInformado, LOGIN) != 0 senhaInformada == SENHA) {

         printf("Login bem-sucedido");
     }

     else {
         printf("Login ou Senha incorreta");
     }
 }