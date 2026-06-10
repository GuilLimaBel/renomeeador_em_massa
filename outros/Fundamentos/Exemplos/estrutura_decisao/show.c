#include <stdio.h>
#include <stdbool.h>

int main() {
    bool comprouIngressoAntes = true;
    bool comprouIngressoNaHora = false;

    printf (" Comprou o ingresso antes? 0 ->NAO, 1 ->SIM");
    scanf("%s", &comprouIngressoAntes);

    comprouIngressoAntes= comprou;

     printf (" Comprou o ingresso na hora? 0 ->NAO, 1 ->SIM");
    scanf("%s", &comprouIngressoNaHora);

    comprouIngressoNaHora= comprou;

    if (comprouIngressoAntes || comprouIngressoNaHora ) {
        printf ("Vai assistir o show !!!");

    }else {
        printf("Nao vai assistir o show");
    }


    return 0;
}
