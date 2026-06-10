#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[10] = "Moisés";
    char logradouro [20] = "Rua Vitalino Michelini";
    char bairro[10] = "Campestre";
    char cidade[11] = "Piracicaba";
    char uf[2] = "SP";

    printf("---Minhas informações residenciais---");
    printf("\nLogradouro: %s", logradouro);
    printf("\nBairro: %s", bairro);
    printf("\nCidade: %s", cidade);
    printf("\nUf: %s", uf);

    return 0;


}