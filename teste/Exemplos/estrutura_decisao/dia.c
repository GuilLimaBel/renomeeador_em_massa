#include <stdio.h>

int main() {
    int dia = 0;

    printf("Qual dia da semana? (dom->0, sex-> 6)");
    scanf("%i", &dia);

    if (dia == 0) {
        printf("Domingo so alefria, de boa no lagoa");
    }else if (dia == 1) {
        printf("Segundona, bora trabalhar :)");
    }else if (dia == 2) {
        printf("Terca, vamos para cima");
    }else if (dia == 3) {
        printf ("Quarta, nosso que, chato");
    }else if (dia == 4) {
        printf(" Quinta, ta chegando sexta em");
    }else if (dia == 5) {
        printf("Sexta, uhull sextou:~");
    }else if (dia == 6) {
        printf("Sabado, final de semana finalmente");
    }else {
        printf ("Dia nao encontrado");

        }
    
        return 0;
    

}
