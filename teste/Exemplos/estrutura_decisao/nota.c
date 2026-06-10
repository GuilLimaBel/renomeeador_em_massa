#include <stdio.h>

int main() {
    float nota= 0;

    printf("Qual foi a sua nota final?");
    scanf ("%f", &nota);

    if (nota > 6.9) {
        printf ("Parabens, voce foi aprovado com %.2f", nota);
    } else {
        printf ("Que decepcao, voce foi reprovado com %.2f",nota);
    }
    
    return 0;
}