#include <stdio.h>

int main () {
    int dia = 0;

    printf("Qual o dia da semana? 1->dom, 7 ->sab");
    scanf ("%i",dia );

    swich (dia){
        case 1:
        printf("Domingou!!!");
        break;

        case 2:
        printf("Segunda, va comecar td d novo");
        break;

        case 3:
        printf("Terça, falta muito pra sexta?");
        break;

        case 4:
        printf("Quarta, oh droga!");
        break;

        case 5:
        printf("Quinta, uhull perto da terça");
        break;

        default;
        printf ("Dia não encontrado");
        break;


    }
        



}