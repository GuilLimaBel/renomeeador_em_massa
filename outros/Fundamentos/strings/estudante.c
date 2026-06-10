#include <stdio.h>
#include <locale.h>

int main ()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");

    char escola[20];
    char tecnico [20];

    printf("n---Olá, vamos preencher seu cadastro---");

    printf("Qual nome da sua escola do Ensino Técnico?");
    scanf(" %[^\n]", escola);

    printf("Qual o nome da sua escola do Ensino Técnico?");
    scanf (" %[]")
    printf("\nNome: %s", nome);
    printf("\nEscola: %s", escola);
    printf("\nCidade: %s", cidade);
    printf("\nUf: %s", uf);

    return 0;
    

}