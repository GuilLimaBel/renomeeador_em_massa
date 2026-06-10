#include <stdio.h>

int main() {

    int tabuada = 0;
    int resultado = 0;
//processamento
    printf ("Qual a tabuada voce deseja que seja impressa?");
    scanf("%i", &tabuada);


    for (int i=1; i <= 10; i++) {
        resultado = tabuada * i;
        printf ( "\n %i x %i = %i", tabuada, i, resultado);
    }
 
    
    return 0;

 }