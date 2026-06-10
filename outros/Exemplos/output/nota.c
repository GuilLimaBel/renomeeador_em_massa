#include <stdio.h>

int main() {
    
    //variaveis
    int atividade1 = 0;
    int atividade2 = 0;

    printf("Qual a nota da atividade 1?");
    scanf("%i", &atividade1);

    printf("Qual a nota da atividade 2");
    scanf("%i", &atividade2);

    //Processamento
    int total_atividades = atividade1 + atividade2;

    //Saida
    printf("A soma das atividades e %i", total_atividades);

    return 0;
}