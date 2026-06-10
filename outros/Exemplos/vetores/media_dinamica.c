#include <stdio.h>

int main()
{
    float Nota1= 0;
    float Nota2= 0;
    float Nota3= 0;
    float Nota4 = 20;
   
    printf("Qual é a primeira nota?");
    scanf ("%f", &Nota1);

    printf("Qual é a segunda nota?");
    scanf ("%f", &Nota2);

    printf("Qual é a terceira nota?");
    scanf ("%f", &Nota3);

    printf("Qual é a quarta nota?");
    scanf ("%f", &Nota4);


    float notas [] = {Nota1 + Nota2 + Nota3 + Nota4 / 4};

    for (int i=0; i < 4; i++) {
        printf("\nNotas: %.2f", notas [4]);
    }

    
    return 0;
}