#include<stdio.h>

int main () {
    int inicio= 0;
    int fim = 0;

    printf (" Qual o numero maior ou igual a 0?");
    scanf ( "%i", &inicio);

    if (inicio < 0) {
        printf ("Numero invalido");
    }

    printf (" Qual o numero final?");
    scanf ("%i", &fim);

    if (inicio == 0) {
        printf ("Numero invalido");

    }else {
        printf (" Qual o número final maior que %i", inicio);
        scanf (" %i", &fim);
    }
    if ( fim > inicio) {

    }else {

        printf (" Numeros invalidos, fim \n");
        printf (" Inicio %i, Fim %i ", inicio, fim);
    } 


    printf ("Mostrando os numeros de do valor inicial ao final");

    for (int i = inicio; i <= fim; i++) {
        printf ("\n Numero %i", i);
    }
    

    return 0;
}