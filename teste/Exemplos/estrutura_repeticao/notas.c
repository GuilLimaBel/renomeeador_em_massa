#include <stdio.h>

int main () {
    printf(" Vamos calcular as notas do aluno");

    int qtdeNotas = 0;
    float totalNotas= 0;
    float mediaFinal= 0;
    float nota = 0;

    printf (" Quantas notas desejar calcular ");
    scanf ("%i", &qtdeNotas);

    

    for (int i=0; i < qtdeNotas; i++) {

    printf ("Qual a nota do aluno");
    scanf ("%f", &nota);

    totalNotas = totalNotas + nota;
    }
    printf ("Total %f", totalNotas);

    mediaFinal = totalNotas / qtdeNotas;

    printf ("\n  A média final é % 2f", mediaFinal);

    if (mediaFinal >= 5){
        printf ("\n Aprovado");
    }else {
        printf("\n Reprovado");
    }
    
return 0;
}